/**
 * _pow_recursion- this function calculates x to the power of y
 * @x: the base number
 * @y: the exponent
 * Return: x to the power of y if y >= 0; else -1 to indicate error.
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
