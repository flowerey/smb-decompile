CC=gcc
CFLAGS=-Iinclude -w -g -c -fcommon -std=gnu11 -Wno-error=implicit-function-declaration
SRCS=$(shell find src -name '*.c')
OBJS=$(SRCS:.c=.o)
all: $(OBJS)
	@echo "Built $(words $(OBJS)) objects (syntax/link not guaranteed — RE output)"
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@
clean:
	find src -name '*.o' -delete
check:
	@ok=0; fail=0; for f in $(SRCS); do if $(CC) $(CFLAGS) $$f -o /dev/null 2>/dev/null; then ok=$$((ok+1)); else fail=$$((fail+1)); fi; done; echo "compile check: ok=$$ok fail=$$fail"
