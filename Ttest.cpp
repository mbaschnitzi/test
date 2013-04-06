#include "Ttest.h"
#include <cstdio>

int Ttest::test(int x)
{
	int y;
	y = t;
	t = x*y;
	return y;
}
