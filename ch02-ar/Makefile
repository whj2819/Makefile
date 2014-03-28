PROGS = b d

all: ${PROGS}

CLEANFILES = *.o *.out *.swap *.core *.tmp *.d \
			 *.a
CC = gcc
CPPFLAGS = -Wall -g
AR = ar
ARFLAGS = rv

#
# libd.a(d.o b.o)
# 等价于libd.a(d.o) libd.a(b.o) 
# 执行make 时: make 'libd.a(d.o)'
# make 'libd.a(b.o)'
#
libd.a(d.o b.o): d.o b.o
	${AR} ${ARFLAGS} $@ $^


.PHONY:clean
clean:
	rm -rf ${PROGS} ${CLEANFILES}


help:
	@echo "*****************************"
	@echo usage: "make 'libd.a(d.o)'"
	@echo "*****************************"
