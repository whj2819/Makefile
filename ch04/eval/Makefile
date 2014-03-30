
OBJPATH = obj
define func
	tmp = $(OBJPATH)/$(strip $1)
	objs += $$(tmp)
$$(tmp): $2
	gcc $$^ -o $$@
endef

$(info $(call func, foo, b.c))
#$(eval $(call func, foo, b.c))

#
# 用info 观察eval的第一次展开.
#
