#include <stdio.h>
/**
 * main - C program that prints the size of data types
 * Return: 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float x;
printf("Size of a char: %l byte(s)\n", (unsigned long) sizeof(a));
printf("Size of a int: %l byte(s)\n ", (unsigned long) sizeof(b));
printf("Size of a long int: %l byte(s)\n", (unsigned long) sizeof(c));
printf("Size of a long long int: %l byte(s)\n", (unsigned long) sizeof(d));
printf("Size of a float: %l byte(s)\n ", (unsigned long) sizeof(x));
return (0);
}
