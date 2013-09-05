#pragma once

#include "std.h"

enum hiscoa_eob_type {
	HISCOA_EOB_NORMAL = 0x0,
	HISCOA_EOB_LAST = 0x01,
};

struct hiscoa_params {
	int origin_3;
	int origin_5;
	int origin_0;
	int origin_2;
	int origin_4;
};
