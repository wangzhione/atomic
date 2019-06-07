#include <stdio.h>
#include <assert.h>

#include "atom.h"

// 为 stdatomic.h 写的简易跨平台项目
//
int main(int argc, char * argv[]) {
    atomic_p_t ptr;
    char * some = "Hello, 世界";
    atomic_store_p(&ptr, some, memory_order_relaxed);
    char * prev = atomic_exchange_p(&ptr, NULL, memory_order_acq_rel);
    assert(some == prev);

    printf("%s\n", prev);

	atom_t o = 0;
    // 自旋锁测试
    printf("atom_t o -> %ld\n", o);

    if (atom_trylock(o)) {
        printf("atom_trylock get lock o = %ld\n", o);
        atom_unlock(o);
    } else {
        printf("atom_trylock no get lock o = %ld\n", o);
    }

    printf("atom_t o -> %ld\n", o);

    return 0;
}
