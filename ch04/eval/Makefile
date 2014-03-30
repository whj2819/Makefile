
OBJPATH = obj
define func
	tmp = $(OBJPATH)/$(strip $1)
	objs += $$(tmp)
$$(tmp): $2
	gcc $$^ -o $$@
endef

#
# 用info 观察eval的第一次展开.
#
#

$(info $(call func, foo, b.c))
#$(eval $(call func, foo, b.c))

#
# $(value  variable)
#
FOO=$PATH
all:
	@echo $(FOO)
	@echo $(value FOO)

