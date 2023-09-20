#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The input string.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *p = s;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13alph[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	while (*s)
	{
		i = 0;

		while (alphabets[i])
		{
			if (*s == alphabets[i])
			{
				*s = rot13alph[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (p);
}
