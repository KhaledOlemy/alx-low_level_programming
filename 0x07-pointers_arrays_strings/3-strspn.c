/**
 * _strspn- this function searches from the beginning till
 * it finds character not in the accept string.
 * @s: this is the string to search into
 * @accept: this is the string allowed to have characters from
 * Return: length till it found an illegal character.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *aptr;
	int val;
	int step;

	step = 0;
	while (*s != '\0')
	{
		val = 0;
		aptr = accept;
		while (*aptr != '\0')
		{
			if (*aptr == *s)
			{
				val = 1;
			}
			aptr += 1;
		}
		if (val == 0)
		{
			return ((unsigned int) step);
		}
		else
		{
			step += 1;
		}
		s += 1;
	}
	return ((unsigned int) step);
}
