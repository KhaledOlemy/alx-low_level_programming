/**
 * wildcmp- compares two strings if they're identical or not
 * (*) is considered a wild card, this can replace any string
 * (even an empty one)
 * @s1: pointer to the beginning of string 1
 * @s2: pointer to the beginning of string 2, can contain ('*')
 * Return: 1 if identical, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	return (0);
}
