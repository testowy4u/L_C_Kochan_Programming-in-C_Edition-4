#include <stdio.h>

int main(void)
{
	float solution;

	solution =  (3.31 * 10e-8 * 2.01 * 10e-7) / (7.16 * 10e-6 + 2.01 * 10e-10);
	printf("The solution is %e\n", solution);

	return 0;
}