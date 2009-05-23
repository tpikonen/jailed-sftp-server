/* Some config vars and includes for building in Debian */
#ifndef _INCLUDES_H_
#define _INCLUDES_H_

#include <sys/time.h>
#include "openbsd-compat/vis.h"
#define HAVE_PATHS_H 1
#define HAVE_SYS_STATVFS_H
#define SIZE_T_MAX UINT_MAX
#define __USE_ISOC99 1

#ifdef FSID_HAS_VAL
/* encode f_fsid into a 64 bit value  */
#define FSID_TO_ULONG(f) \
        ((((u_int64_t)(f).val[0] & 0xffffffffUL) << 32) | \
            ((f).val[1] & 0xffffffffUL))
#else
# define FSID_TO_ULONG(f) ((f))
#endif

/* from <limits.h> with __USE_ISOC99 defined */
#define LLONG_MAX    9223372036854775807LL
#define LLONG_MIN    (-LLONG_MAX - 1LL)

#endif // _INCLUDES_H_
