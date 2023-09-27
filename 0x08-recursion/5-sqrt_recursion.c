/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
*/
int _sqrt_recursion_wrapper(int n, int min, int max)
{
	int guess, guess_squared;

	guess = (min + max) / 2;		/*get guess (g)*/
	guess_squared = guess * guess;		/*square guess (sg)*/

	if (guess_squared == n)			/*if squared guess == n return guess*/
		return (guess);
	else if (min >= max)			/*this means n doesn't have a perfect square*/
		return (-1);
	else if (guess_squared < n)		/*overshoot g if sg is less than the n*/
		return (_sqrt_recursion_wrapper(n, guess + 1, max));
	else					/*undershoot g if sg is more than the n*/
		return (_sqrt_recursion_wrapper(n, min, guess - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
    if (n < 0)       /* sqrt of negative numbers is not possible, return -1 */
        return -1;
    return _sqrt_recursion_wrapper(n, 1, n);
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return 0;
}
