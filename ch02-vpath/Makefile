PROGS = main

all: ${PROGS}

CLEANFILES = *.o *.out *.swap *.core *.tmp

VPATH = src include
CPPFLAGS = -Wall -g -I include
CC = gcc

main: demo.o main.o
	${CC} ${CCFLAGS}  -o $@ $^
demo: demo.o demo.h
	${CC} ${CCFLAGS}  -o $@ $^

.PHONY:clean
clean:
	rm -rf ${PROGS} ${CLEANFILES}


