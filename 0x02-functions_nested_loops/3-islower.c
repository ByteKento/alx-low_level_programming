#include "main.h"

/**
 * _islower - checks for lowercase character
 * @i: character to be returned
 * Return: 1 if c is lowercase else 0
 */

int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	return (0);
}
