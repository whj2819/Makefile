PROGS = main

all: ${PROGS}

CLEANFILES = *.o *.out *.swap *.core *.tmp

VPATH = src include
CPPFLAGS = -Wall -g -I include
CC = gcc

# main: demo.o main.o
	 # ${CC} ${CPPFLAGS}  -o $@ $^

main: demo.o main.o
main.o: demo.h
demo.o: demo.h

.PHONY:clean
clean:
	rm -rf ${PROGS} ${CLEANFILES}


