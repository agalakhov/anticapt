
SRCS = captdefilter.c hiscoa-decompress.c hiscoa-compress.c

captdefilter: $(SRCS)
	gcc-color -O2 -o $@ $^
