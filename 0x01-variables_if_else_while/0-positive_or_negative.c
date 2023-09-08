#include <stdlib.h>
#include <time.h>
/**
 *main -program will assign a random number to the variable
 *more headers goes there
 * betty style doc for function main goes there
 *Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
