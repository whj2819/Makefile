words:
	@echo $(words "abc")



#
# e.g:
# $(patsubst search-pattern, replace-string, test)
# 
directory-path = "/home/whj2819/" 
strip-trailing-slash = $(patsubst %/,%,$(directory-path))
pat-replace:
	@echo $(strip-trailing-slash) 


#
# e.g:
# $(subset search-string, replace-string, text)
# 
souces := a.c b.c car.cdr.c

# 逗号之间不要有空格. 
object := $(subst .c,.o,$(souces))
replace:
	@echo  "$(object)"





# e.g:
# $(findstring string..., text)
#

find:
	@echo $(findstring world, hello world)

#
# e.g:
# $(filter pattern..., text)
#
words := he the hen other the%
get-the:
	@echo he matches : $(filter he, $(words))
	@echo %he matches : $(filter %he, $(words))
	@echo he% matches : $(filter he%, $(words))
	@echo %he% matches : $(filter %he%, $(words))


#
# e.g:
# $(filter-out pattern..., text)
#
all_source := count_words.c counter.c lexer.l counter.h lexer.h
to_compile:
	@echo matches: $(filter-out %.h, $(all_source))

