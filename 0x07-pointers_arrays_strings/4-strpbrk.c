/**
 * _strpbrk- this function searches for a set of characters
 * inside a string until first occurence, then breaks
 * @s: this is the string to search in
 * @accept: this is the set of characters to search for
 * Return: the pointer to the first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	char *aptr;
	int val;

	while (*s != '\0')
	{
		aptr = accept;
		val = 0;
		while (*aptr != '\0')
		{
			if (*aptr == *s)
			{
				val = 1;
			}
			aptr += 1;
		}
		if (val == 1)
		{
			return (s);
		}
		s += 1;
	}
	return (s);
}
