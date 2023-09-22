#include "main.h"

/**
 *_strcat(char *dest, char *src) - function to 
 *concatenate a string
 *@dest: - destination string
 *@src: - src 
 *Return: dest(success)
 */

char *_strcat(char *dest, char *src)
{
	int length1, length2;
	length1 = 0;
	length2 = 0;

	while (dest[length1] != '\0')
	{
		length1++;
	}
	while (src[length2] != '\0')
	{
		length2++;
	}
	for ( i = 0; i <= length2; i++)
	{
		dest[length1 + 1] = src[i];
	}
	return (dest);
}
