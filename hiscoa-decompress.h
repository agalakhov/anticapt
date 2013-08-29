#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

struct hiscoa_params {
	int origin_3;
	int origin_5;
	int origin_0;
	int origin_2;
	int origin_4;
};

unsigned hiscoa_decompress_band(
	const void **band, size_t *size,
	void *output, size_t *output_size,
	unsigned line_size,
	const struct hiscoa_params *params
);
