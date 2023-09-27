#include "main.h"

/**
 *_print_rev_recursion - prints a sring in reverse
 *@s: given string to reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == "\0")
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
