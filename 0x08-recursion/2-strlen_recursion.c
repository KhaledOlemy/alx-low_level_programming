/**
 * _strlen_recursion- this function gets the length of a string
 * @s: pointer to the start of the string
 * Return: length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
