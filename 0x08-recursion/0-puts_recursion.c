#include <stdio.h>

/**
 * _puts_recursion(char *s);- function  that prints a string followe b a new line
 * returb - always a success
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s+1);
	}
	else
		putchar('\n');
}
