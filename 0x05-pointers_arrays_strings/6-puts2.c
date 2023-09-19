#include "main.h"

/**
 *puts2 - rints every other character of a string
 *starting with the first
 *character, followed by a new line.
 *@str: character string
 */

void puts2(char *str)
{
	int m = 0;
	int t = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		m++;
	}
	t = m - 1;
	for (x = 0; x <= t; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
