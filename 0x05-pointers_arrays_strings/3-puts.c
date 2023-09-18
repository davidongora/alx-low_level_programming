/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
