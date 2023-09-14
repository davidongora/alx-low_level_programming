#include "main.h"

/**
 * print_diagonal - prints a diagonal line of "\" characters
 *
 * @n: the number of "\" characters to print
 */
void print_diagonal(int n)
{
    int i, j;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            _putchar(' '); // Print spaces before the "\" character
        }
        _putchar('\\'); // Print the "\" character
        _putchar('\n'); // Move to the next line
    }
}
