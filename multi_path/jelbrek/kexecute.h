#include <mach/mach.h>
#include <inttypes.h>
#include <sys/mount.h>
errno_t vnode_lookup(const char *path, int flags, vnode_t *vnode, uint64_t context);

uint64_t kMexecute(uint64_t addr, const char* addr1,  uint64_t x0, uint64_t vnode, uint64_t x2);

uint64_t kexecute(uint64_t addr, uint64_t x0, uint64_t x1, uint64_t x2, uint64_t x3, uint64_t x4, uint64_t x5, uint64_t x6);
void init_kexecute(void);
void term_kexecute(void);
