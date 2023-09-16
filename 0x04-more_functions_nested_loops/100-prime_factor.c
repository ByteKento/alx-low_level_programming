#include <stdio.h>
#include <math.h>

/**
 *main - find and print largest prime factor.
 *Return: Always 0.
 */

int main(void)
{
	long x, maxnum;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxnum = number / x;
		}
	}
	printf("%ld\n", maxnum);
	return (0);
}
