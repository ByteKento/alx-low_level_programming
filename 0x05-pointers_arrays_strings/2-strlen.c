#include "main.h"

/**
 *_strlen - return the length of a string
 *@s: character to return length.
 *Return: return length of character.
 */

int _strlen(char *s)
{
	int y = 0;

	while (*s != '\0')
	{
		y++;
		s++;
	}
	return (y);
}
