#include "Utils.h"
#include <cmath>

static constexpr float EPSILON{ 0.0001f };

bool IsEqual(float x, float y)
{
	return std::fabsf(x-y) < EPSILON;
}