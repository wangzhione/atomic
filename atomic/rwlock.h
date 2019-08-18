#ifndef _RWLOCK_H
#define _RWLOCK_H

#include "atom.h"

// create atom write and read lock
// struct rwlock need zero is atom interface extend
// need var init struct rwlock rw = { 0,0 };
struct rwlock {
    atom_t rlock;
    atom_t wlock;
};

// rwlock_rlock - add read lock
extern void rwlock_rlock(struct rwlock * restrict rw);

// rwlock_wlock - add write lock
extern void rwlock_wlock(struct rwlock * restrict rw);

// rwlock_unwlock - unlock write lock
extern void rwlock_unwlock(struct rwlock * restrict rw);

// rwlock_unrlock - unlock read lock
extern void rwlock_unrlock(struct rwlock * restrict rw);

#endif//_RWLOCK_H
