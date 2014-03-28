PROGS = main d

all: ${PROGS}

CLEANFILES = *.o *.out *.swap *.core *.tmp

CC = gcc
CPPFLAGS = -Wall -g

depend: d.c
	${CC} -MM ${CPPFLAGS} $^ > $@
include depend

main: main.o
d: d.o

.PHONY:clean
clean:
	rm -rf ${PROGS} ${CLEANFILES}

