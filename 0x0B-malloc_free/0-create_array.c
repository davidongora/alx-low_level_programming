#include <stdlib.h>

/**
 * *create_array: gives an array
 *
 * @size: array size 
 * @c: variable of type char to initialize array with
 * 
 * Return : always a 0 array @
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i=0; i < size; i++)
		a[i] = c;

	return (a);
}
