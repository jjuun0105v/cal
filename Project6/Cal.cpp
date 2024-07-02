#pragma once
#include <cassert>

class Cal
{
public:
	double getDivide(int a, int b) {
		assert(b != 0 && "ERRRO::divide zero");
		return a / (double)b;
	}
};