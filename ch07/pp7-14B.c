#include <stdio.h>

int i, aSum = 0, aLen = 5;
int a[5] = {1, 2, 3, 4, 5};


int main(void)
{
	int array_sum(void);

	printf("Array sum is %i\n", array_sum());

	return 0;
}


int array_sum(void)
{
	for (i = 0; i <= aLen; ++i)
		aSum += a[i];

	return aSum;
}
