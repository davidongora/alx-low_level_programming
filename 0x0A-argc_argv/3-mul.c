#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a product of two args
 * @argc: counts num of args
 * @argv: checks argc snum
 * Return: 0 after success
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}
