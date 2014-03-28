#
#
# 专属变量: 添加额外的编译选项.
#
#
PROGRS = main d

all: $(PROGRS)

CC = gcc
CFLAGS = -Wall -g

main: CFLAGS += -DUSE_NEW_MALLOC=1
main: main.o

#
# 处理完main后, CFLAGS
# 的值恢复成原来的样子.
#
d: d.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(PROGRS) *.o


