/**
 * _strcmp - function compares two string
 *
 * @s1: input to compare
 * @s2: to be compared to s1
 *
 * Return: 0 if they are equal a negative integer if the stopping
 * xter is less than s2, possitive int if the s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
