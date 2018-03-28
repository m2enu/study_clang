CC:=gcc
CFLAGS:=-Wall -fno-common
EX01:=global_wo_extern
EX02:=global_with_extern
SRC_EXCLUDES:=$(EX01)_sub.c $(EX02)_sub.c
SRCS:=$(filter-out $(SRC_EXCLUDES),$(wildcard *.c))
OBJS:=$(SRCS:.c=.o)
SRC_MSG:=msg.c
OBJ_MSG:=$(SRC_MSG:.c=.o)

.SUFFIXES: .c .o

.c.o: $(OBJ_MSG)
	@echo
	@./$(OBJ_MSG) $<
	-$(CC) $(CFLAGS) $< -o $@
	@if [ -f $@ ]; then ./$@; fi

.PHONY: all clean print

all: $(OBJS)

clean:
	$(RM) *.o *.gch

print:
	@echo $(SRCS)
	@echo $(OBJS)

$(EX01).o: $(OBJ_MSG)
	@echo
	@./$(OBJ_MSG) $(EX01).c
	-$(CC) $(CFLAGS) $(EX01).c $(EX01)_sub.c -o $@
	@if [ -f $@ ]; then ./$@; fi

$(EX02).o: $(OBJ_MSG)
	@echo
	@./$(OBJ_MSG) $(EX02).c
	-$(CC) $(CFLAGS) $(EX02).c $(EX02)_sub.c -o $@
	@if [ -f $@ ]; then ./$@; fi

$(OBJ_MSG): $(SRC_MSG)
	$(CC) $(CFLAGS) $< -o $@
