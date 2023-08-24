/**
 * leet- this function converts text into leet style
 * a e o t l A E O T L - these letters are replaced wiht 4 3 0 7 1
 * @s: this is the input string
 * Return: leet-styled string.
*/
char *leet(char *s)
{
	int i, j;
	char *s1 = "aeotlAEOTL";
	char *s2 = "4307143071";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}
