#include "main.h"

/**
 *_strcpy - function that copies the string pointed to by src
 *including the terminating null byte (\0),
 *to the buffer pointed to by dest
 *@dest: destination
 *@src: src of string
 *Return: dest(success)
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] =  src[x];
	}
	dest[x] = '\0';
	return (dest);
}
