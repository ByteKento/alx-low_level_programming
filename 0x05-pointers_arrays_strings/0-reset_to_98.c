#include  <stdio.h>
#include "main.h"

/**
 *reset_to_98 -  takes a pointer to an int as parameter
 *and updates the value it points to
 *@n: parameter to change.
 *Return: n(success).
 */

void reset_to_98(int *n)
{
	*n = 98;
}