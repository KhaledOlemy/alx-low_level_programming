#include <string.h>
/**
 * _atoi- this function prints out the first number it sees
 * positive or negative in a string
 * @s: this is the input string to be extracted from
 * Return: int, the number we're seeking
 */
int _atoi(char *s)
{
	int length, i, step, out, pos, neg;

	out = -1;
	pos = 0;
	neg = 0;
	length = strlen(s);
	for (i = 0; i < length; i++)
	{
		if (out == -1)
		{
			step = (int) s[i];
			if (step >= 48 && step <= 57)
			{
				out = step - 48;
			}
			else if (step == 43)
			{
				pos += 1;
			}
			else if (step == 45)
			{
				neg += 1;
			}
			else
			{continue; }
		}
		else
		{
			step = (int) s[i];
			if (step >= 48 && step <= 57)
			{
				out = (out * 10) + (step - 48);
			}
			else
			{break; }
		}
	}
	if (neg > pos)
	{out = out * -1; }
	return (out);
}
