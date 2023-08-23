/**
 * string_toupper- this function makes input string uppercase
 * @s: this is the input string.
 * Return: uppercased version of the input string.
*/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
