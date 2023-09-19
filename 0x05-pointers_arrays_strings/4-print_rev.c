#include "main.h"

/**
 *print_rev - prints a string, in reverse
 *followed by a new line.
 *@s: string to reverse.
 */

void print_rev(char *s)
{
	int y = 0;
	int o;

	while (*s != '\0')
	{
		y++;
		s++;
	}
	s--;
	for (o = y; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
