
SRCS = captdefilter.c hiscoa-decompress.c

captdefilter: $(SRCS)
	gcc-color -O2 -o $@ $^
