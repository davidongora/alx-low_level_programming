#include <stdlib.h>
#include "main.h"

/**
 * *create_array- creates an array of chars
 * and initilizes it with a specified char
 *
 * @size: array size to be created
 * @c: variable of type char to initialize array with
 * 
 * Return : pointer to the array (success), NULL (error)
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

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
