#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *leet - to encode as given string
 *@n: passed string
 *Return:n(success)
 */

char *leet(char *n)
{
	int i, j;

	char textchar[] = "aAeEoOtTlL";
	char encodeMatch[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == textchar[j])
			{
				n[i] = encodeMatch[j];
			}
		}
	}
	return (n);
}
