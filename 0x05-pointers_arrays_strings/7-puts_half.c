#include "main.h"

/**
 *strlen - prints half of a string
 *@s: string character.
 *Return: m(success)
 */

int strlen(char *s)
{
	int m = 0;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	return (m);
}
