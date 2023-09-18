#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
    int length = 0;
    int i;

    while (s[length] != '\0')
        length++;

    for (i = length - 1; i >= 0; i--)
        _putchar(s[i]);

    _putchar('\n');
}
