/**
 * _isupper- this function checks whether a letter is uppercase or lower.
 * @c: lower case or upper case character.
 *
 * Return: 0 SUCCESS.
 */

int _isupper(int c)
{
	int out = 0;

	if (c >= 65 && c <= 90)
	{
		out = 1;
	}
	return (out);
}
