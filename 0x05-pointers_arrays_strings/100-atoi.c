#include <string.h>
/**
 * _atoi- this function prints out the first number it sees
 * positive or negative in a string
 * @s: this is the input string to be extracted from
 * Return: int, the number we're seeking
 */
int _atoi(char *s)
{
	int length, i, step, neg;
	unsigned int out;

	out = 19178189;
	neg = 0;
	length = strlen(s);
	for (i = 0; i < length; i++)
	{
		if (out == 19178189)
		{
			step = (int) s[i];
			if (step >= 48 && step <= 57)
			{out = step - 48; }
			else if (step == 45)
			{neg += 1; }
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
	if (out == 19178189)
	{out = 0; }
	if (neg % 2 == 1)
	{out = -out; }
	return (out);
}
