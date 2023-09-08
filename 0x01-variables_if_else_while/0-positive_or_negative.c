#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	lastDigit = n % 10; /*gets last digit*/

	if (lastDigit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);

	return (0);
}
