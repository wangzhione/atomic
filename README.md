# atomic

    不爽 cl 没支持 c11 atomic, 刚好遇到巨擘 jemalloc

[jemalloc atomic](https://github.com/jemalloc/jemalloc/blob/dev/include/jemalloc/internal/atomic.h)

    参照学习, 封装并应用到项目中.

## 补充

    假如你还想写会 C, 业务层实战中可以使用.

```C
#include <stdio.h>

#include "atom.h"

int main(void) {
    atom_t o = 0;

    atom_lock(o);

    printf("Hello,"); 
    printf("世界\n");

    atom_unlock(o);
}
```

    更多细节可以参看 atom.h 和 atomic.h 实现. 💗 有些意思 :)

### 展望

[让水倒流](https://music.163.com/#/song?id=1365690382)

    未来以来 C11, C17, C18 甚至 C2x 将是全平台生产线一个重要选择 ~ 感恩 💗
