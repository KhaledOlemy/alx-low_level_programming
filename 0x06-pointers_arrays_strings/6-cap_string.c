/**
 * upper- this function uppercases the input char
 * @c: this is the input char
 * Return: uppercases char
 */
char upper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/**
 * cap_string- this function capitalizes any char after:
 * , ; . " ( ) \s \t \n ? ! { }
 * @s: this is the input string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0)
		{
			s[i] = upper(s[i]);
		}
		else if (s[i] == ',' || s[i] == ';' || s[i] == '.')
		{
			s[i + 1] = upper(s[i + 1]);
		}
		else if (s[i] == '"' || s[i] == '(' || s[i] == ')')
		{
			s[i + 1] = upper(s[i + 1]);
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '?')
		{
			s[i + 1] = upper(s[i + 1]);
		}
		else if (s[i] == '{' || s[i] == '}' || s[i] == '!')
		{
			s[i + 1] = upper(s[i + 1]);
		}
		i++;
	}
	return (s);
}
