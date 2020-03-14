
DIRS=$(dir $(wildcard Laboratorium*/))
.PHONY: all clean $(DIRS)

all: $(DIRS)
	@echo $(DIRS)

$(DIRS):
	@echo $@
	$(MAKE) -C $@

clean:
	@for DIR in $(DIRS);\
	do\
		$(MAKE) -C $$DIR clean;\
	done
