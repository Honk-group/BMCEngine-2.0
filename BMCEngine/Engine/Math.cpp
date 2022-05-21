#include "Math.h"

float Math::Clamp(float number, float min, float max)
{
	bool less = (number < min);
	bool more = (number > max);
	float returnNum = number;
	if (less) {
		returnNum = min;
	}
	if (more) {
		returnNum = max;
	}
	return returnNum;
}
