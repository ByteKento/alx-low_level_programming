#include "main.h"

/**
 *print_sign - func to print sign of a number
 *@n: character to check
 *Return: 1 for positive number and -1 for negative num
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
