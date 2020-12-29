#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <inttypes.h>

#include "atomic.h"

// 为 stdatomic.h 写的简易跨平台项目
//
int main (void) {
    _Atomic(char *) ptr;
    char * some = "Hello, 世界";
    atomic_store_explicit(&ptr, some, memory_order_relaxed);
    char * prev = atomic_exchange_explicit(&ptr, NULL, memory_order_acq_rel);
    assert(some == prev);

    printf("%s\n", prev);

    // 正确使用锁
    pthread_mutex_t o = PTHREAD_MUTEX_INITIALIZER;

    if (pthread_mutex_trylock(&o))
        printf("pthread_mutex_trylock no get lock, errno = %d\n", errno);
    else {
        printf("pthread_mutex_trylock get lock\n");
        pthread_mutex_unlock(&o);
    }

    pthread_mutex_destroy(&o);

    exit(EXIT_SUCCESS);
}
