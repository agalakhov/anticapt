#pragma once

#include "std.h"
#include "hiscoa-common.h"

size_t hiscoa_compress_band(void *buf, size_t size,
	const void *band, unsigned line_size, unsigned nlines,
	enum hiscoa_eob_type eob_type,
	const struct hiscoa_params *params);

