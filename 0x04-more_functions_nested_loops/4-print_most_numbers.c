#include "main.h"

/**
 *print_most_numbers - print the numbers from 0 to 9.
 *Description: if number is 2 or 4 skips.
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
