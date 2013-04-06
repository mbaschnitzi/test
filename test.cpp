#include "Ttest.h"
#include <cstdio>

int main(void)
{
	Ttest t = new Ttest();
	t->test(1);
	delete t;
//	printf("Hello World!\n");
	return 1;
}
