#define __NEED_gid_t
#define __NEED_size_t
#include <bits/alltypes.h>
#include <errno.h>

int syscall_getgroups(size_t size, const gid_t list[])
{
  errno = EFAULT;
  return -1;
}
