# atomic

    C11 stdatomic.h cl 木支持不爽. 刚好遇到 隐世大佬 jemalloc. 

[jemalloc atomic](https://github.com/jemalloc/jemalloc/blob/dev/include/jemalloc/internal/atomic.h)

    顺带封装到使用的项目中.

## 补充

    假如你还想写会 C, 而不是 C++ (or CC). 实战中可以使用.

[酷](http://music.163.com/#/song?id=118404)


```C
#include <stdio.h>

#include "atom.h"

int main(void) {
    atom_t o;
    atom_lock(o);
    printf("Hello, 世界\n");
    atom_unlock(o);
}
```


    更多细节可以参看 atom.h 和 atomic.h 实现. 很有意思
