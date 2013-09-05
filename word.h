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
