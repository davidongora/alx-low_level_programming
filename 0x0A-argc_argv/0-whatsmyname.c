#include "main.h"
#include <stdio.h>

/**
 * main- a program that prints its name
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
        printf("%s\n", *argv);

        return (0);
}
