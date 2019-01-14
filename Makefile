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
CFLAGS  = -g -O2 -Wall -Wno-unused-result

#
# 具体的产品生产								
#
.PHONY : all clean

all : main.exe

#
# 主运行程序main
#
main.exe : $(ROOT)/main.c
	$(CC) $(CFLAGS) -o $@ $^

# 清除操作
clean :
	-rm -rf main.exe
	-rm -rf Debug Release logs x64
	-rm -rf $(ROOT)/Debug $(ROOT)/logs $(ROOT)/Release $(ROOT)/x64
