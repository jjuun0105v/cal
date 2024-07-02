#pragma once
#include <cassert>

class Cal
{
public:
	double getDivide(int a, int b) {
		assert(b != 0 && "ERRRO::divide zero");
		return a / (double)b;
	}

	int getGop(int a, int b) {
		return a * b;
	}

	int getZegop(int a) {
		return a * a;
	}
  
	int getMinus(int a, int b)
	{
		return (a - b);
	}
  
	int getSum(int a, int b) {
		return a + b;
	}

};