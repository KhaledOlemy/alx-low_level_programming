/**
 * rot13- this function applies cyper of rot13 type
 * @s: this is the input sting
 * Return: this is the output string cyphered.
 */
char *rot13(char *s)
{
	int i, j;
	char *s1, *s2;

	i = 0;
	s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
		i++;
	}
	s[i] += '\0';
	return (s);
}
