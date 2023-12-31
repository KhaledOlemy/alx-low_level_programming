/**
 * _memset- this function sets the following n bytes with
 * char b
 * @s: this is the address of the start of the addressing
 * @b: this is the byte to be assigned to the addresses
 * @n: this is the count of addresses to be assigned to.
 * Return: the address of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = s;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (ptr);
}
