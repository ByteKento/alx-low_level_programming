#include " main.h"

/**
 *lett - to encode as given string
 *@str: passed string
 *Return: Empty
 */

char *leet(char *str)
{
	int i, j;

	char textchar[] = "aAeEoOtTlL";
	char encodeMatch[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == textchar[j])
			{
				str[i] = encodeMatch[j];
			}
		}
	}
}
