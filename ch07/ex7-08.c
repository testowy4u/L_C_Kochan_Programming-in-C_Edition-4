#include <stdio.h>

// Function to calculate the absolute value of a number

float absolute_value(float x)
{
	if (x < 0)
		x = -x;

	return x;
}

// Function to compute the square root of a number

float square_root(float x)
{
	const float epsilon = .00001;
	float		guess = 1.0;

	while (absolute_value(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}


int main(void)
{
	printf("square_root(2.0) = %f\n", square_root(2.0));
	printf("square_root(144.0) = %f\n", square_root(144.0));
	printf("square_root(17.5) = %f\n", square_root(17.5));

	return 0;
}
