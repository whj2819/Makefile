
comma := ,
echo-args = $(subst ' ','$(comma) ',\
	$(foreach a, 1 2 3 4 5 6 7 8 9,'$($a)'))

display:
	@echo $(echo-args)
	@echo $(MAKE)



#
# $(call var, para, para...)
#
reverse = $(2)$(1)
foo = $(call reverse,1,2)

call_foo:
	@echo $(foo)

names := a b c
files := $(foreach n, $(names), '$(n).o')
for_each:
	@echo $(files)


#
# $(sort list)
#
stdout := $(shell ls )
sort:
	@echo $(sort a x de f b)
	 $(stdout)


#
# 中文版本有误应该为:
# $(word N, TEXT)
#
words:
	@echo $(words a b) 
	@echo $(word 2, a b c)
	@echo $(wordlist 2,5, a b c cat pig dog)


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
#words := he the hen other the%
#get-the:
#	@echo he matches : $(filter he, $(words))
#	@echo %he matches : $(filter %he, $(words))
#	@echo he% matches : $(filter he%, $(words))
#	@echo %he% matches : $(filter %he%, $(words))


#
# e.g:
# $(filter-out pattern..., text)
#
all_source := count_words.c counter.c lexer.l counter.h lexer.h
to_compile:
	@echo matches: $(filter-out %.h, $(all_source))

