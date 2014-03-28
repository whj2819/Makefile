PROGS = main

all: ${PROGS}

CLEANFILES = *.o *.out *.swap *.core *.tmp

# VPATH = src include
# CPPFLAGS = -Wall -g -I include
CC = gcc

.c:
	${CC} ${CPPFLAGS}  -o $@ $^
.PHONY:clean
clean:
	rm -rf ${PROGS} ${CLEANFILES}


