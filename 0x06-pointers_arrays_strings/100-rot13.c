#include "main.h"
#include <string.h>

/**
 *rot13 - encode with ciser cypher
 *@a: - string to encode
 *Return: a(success)
 */

char *rot13(char *a)
{
	int i;
	int j;
	char testMatch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char matcher[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == testMatch[j])
			{
				a[i] = matcher[j];
				break;
			}
		}
	}
	return (a);
}
