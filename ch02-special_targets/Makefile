PROGS = main d

all: ${PROGS}

CLEANFILES = *.o *.out *.swap *.core *.tmp

CC = gcc

# .INTERMEDIATE: main.o
# .SECONDARY: main.o
#.PRECIOUS: main.o

main: main.o
d: d.o

.PHONY:clean
clean:
	rm -rf ${PROGS} ${CLEANFILES}

