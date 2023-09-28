include "main.h"

/**
 *is_prime_number - function that return 1 for 
 *only prime numbers, otherwise return 0.
 *@n: number input to test
 *Return: 1 if prime number else 0
 */

int is_prime_number(int n)
{
	return n % 2 == 1 ? 1 : 0;
}
