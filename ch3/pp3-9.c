#include <stdio.h>

int main(void)
{
	int i = 256, j = 7;
	int Next_multiple = i + j - i % j;


	i = 365, j = 7;
	Next_multiple = i + j - i % j;
	printf("%i\n", Next_multiple);

	i = 12258, j = 23;
	Next_multiple = i + j - i % j;
	printf("%i\n", Next_multiple);

	i = 996, j = 4;
	Next_multiple = i + j - i % j;
	printf("%i\n", Next_multiple);

	return 0;
}