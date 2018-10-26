CC              := gcc
TARGETS         := include_guard.o no_include_guard.o                   \
                   global_with_extern.o global_wo_extern.o              \
                   variable_scope.o callback.o pointer_bigdata.o        \
                   inline_function.o struct_const.o struct_macro.o

all: clean $(TARGETS)

clean:
	$(RM) *.o *.gch

global_with_extern.o    : global_with_extern.c global_with_extern_sub.c
global_wo_extern.o      : global_wo_extern.c global_wo_extern_sub.c

%.o: %.c
	@echo
	@echo "\x1b[30;42m===== Compile $@ =====\x1b[0m"
	-$(CC) $^ -o $@ && ./$@

.PHONY: all clean
