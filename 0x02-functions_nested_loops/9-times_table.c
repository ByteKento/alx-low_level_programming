#include "main.h"

/**
 *times_table - func to print 9 times table
 *@m, @y, @z, @j, @k: arguments characters
 */

void times_table(void)
{
	int m, y, z, j, k;

	for (m = 0; m <= 9; m++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = m * y;
			if (z > 9)
			{
				j = z % 10;
				k = (z - j) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(k + '0');
				_putchar(j + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
