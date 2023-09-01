/**
 * _strlen- this function gets the length of a string
 * @s: this is the input character
 * Return: length of input string.
 */
int _strlen(char *s)
{
	int out = 0;

	while (*s != '\0')
	{
		out += 1;
		s += 1;
	}
	return (out);
}
