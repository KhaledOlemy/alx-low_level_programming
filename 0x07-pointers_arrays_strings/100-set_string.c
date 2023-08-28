/**
 * set_string- this function replaces things
 * @s: this is the string to be replaces
 * @to: this is the string to be copied from
 */
void set_string(char **s, char *to)
{
	while (*to != '\0')
	{
		*s = to;
		s += 1;
		to += 1;
	}
}
