/**
 * _isdigit - this checks if input char is a digit or not
 * @c: input char
 * Return: 1, 0 (1 if digit, 0 if not)
 */
int _isdigit(int c)
{
	int out = 0;

	if (c >= 48 && c <= 58)
	{
		out = 1;
	}
	return (out);
}
