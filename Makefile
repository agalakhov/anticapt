
SRCS = test-hiscoa.c hiscoa-decompress.c hiscoa-compress.c

test-hiscoa: $(SRCS)
	gcc-color -O2 -o $@ $^
