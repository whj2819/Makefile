objects = main.o kbd.o command.o display.o insert.o search.o files.o utils.o



edit: $(objects)
	cc -o edit $(objects)

main.o:main.c defs.h
	cc -c main.c

kbd.o:kbd.c defs.h command.h

command.o:command.c defs.h command.h

display.o:display.c defs.h buffer.h

insert.o:insert.c defs.h buffer.h

search.o:search.c defs.h buffer.h

files.o:files.c defs.h buffer.h command.h

utils.o:utils.c defs.h


.PHONY:clean
clean:
	-rm edit $(objects) 
