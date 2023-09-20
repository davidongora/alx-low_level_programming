/**
 *_strncpy - copies up to n characters from a string
 *@dest: pointer to destination input buffer
 *@src: pointer to source input buffer
 *@n: bytes of @src
 *Return- returns @dest
*/

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
