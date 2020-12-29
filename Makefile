#
# 编译的目录结构
# Release : make
# Clean   : make clean
#
ROOT    ?= atomic

#
# 全局编译的设置
#
CC      = gcc
#
# -Werror=incompatible-pointer-types	: 
#
#
CFLAGS  = -g -O2 -Werror -Wall -Wextra
LIB = -lpthread

#
# 具体的产品生产								
#
.PHONY : all clean

all : main.exe

#
# 主运行程序main
#
main.exe : $(ROOT)/main.c
	$(CC) $(CFLAGS) -o $@ $^ $(LIB)

# 清除操作
clean :
	-rm -rf main.exe
	-rm -rf Debug Release logs x64
	-rm -rf $(ROOT)/Debug $(ROOT)/logs $(ROOT)/Release $(ROOT)/x64
