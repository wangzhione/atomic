# atomic

    c11 stdatomic.h 的 cl 木支持不爽. 刚好遇到隐世大佬 jemalloc,

[jemalloc atomic](https://github.com/jemalloc/jemalloc/blob/dev/include/jemalloc/internal/atomic.h)

    顺带封装到使用的项目中.

## 补充

    假如你还想写会 C, 而不是 C++ (or CC). 实战中可以使用.

[酷](https://i.y.qq.com/v8/playsong.html?songid=102954693&source=yqq#wechat_redirect)

```C
#include <stdio.h>

#include "atom.h"

int main(void) {
    atom_t o = 0;
    atom_lock(o);
    puts("Hello, 世界");
    atom_unlock(o);
}
```

    更多细节可以参看 atom.h 和 atomic.h 实现. 很有意思
