#include "main.h"

/**
 *_isupper - checks for uppercase.
 *@c: character to be tested.
 *Return: 1 if c iuppercase else 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
{
		return (1);
	}
	return (0);
}
