#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - ENtry point
 *
 * @n - integer
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is zero\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
