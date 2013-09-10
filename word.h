#pragma once

#include "std.h"

static inline uint8_t HI(uint16_t x)
{
	return (x >> 8) & 0xFF;
}

static inline uint8_t LO(uint16_t x)
{
	return (x >> 0) & 0xFF;
}

static inline uint16_t WORD(uint8_t lo, uint8_t hi)
{
	return ((hi & 0xFF) << 8) | ((lo & 0xFF) << 0);
}

static inline uint16_t BCD(uint8_t lo, uint8_t hi)
{
	uint16_t a, b, c, d;
	a = (hi >> 8) & 0x0F;
	b = (hi >> 0) & 0x0F;
	c = (lo >> 8) & 0x0F;
	d = (lo >> 0) & 0x0F;
	if (a > 9 || b > 9 || c > 9 || d > 9)
		return WORD(lo, hi);
	return a * 1000 + b * 100 + c * 10 + d * 1;
}
