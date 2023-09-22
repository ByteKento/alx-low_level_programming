#include "main.h"

/**
 *_strcat - function to concatenate a string
 *@dest: - destination string
 *@src: - src
 *Return: dest(success)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i]c != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
