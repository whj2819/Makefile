PROGS = main

all: ${PROGS}

CLEANFILES = *.o *.out *.swap *.core *.tmp
SOURCES = main.c
CPPFLAGS = -Wall -g
CC = gcc

.c:
	${CC} ${CPPFLAGS}  -o $@ $^


include $(subst .c,.d,$(SOURCES))
#
# $* 在这里代表%.d 中 %号部分.
# e.g: main
#
%.d: %.c
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$;	\
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

.PHONY:clean
clean:
	rm -rf ${PROGS} ${CLEANFILES}
