#include "main.h"

/**
 * _abs -computes absolute value integer.
 * @n: character to return
 * Return: absValue if successs
 */

int _abs(int n)
{
	if (n < 0)
	{
		int absValue;

		absValue = n * -1;
		return (absValue);
	}
	return (n);
}
