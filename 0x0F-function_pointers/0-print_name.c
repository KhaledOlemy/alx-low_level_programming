/**
 * print_name - prints a word depends on the function entered
 * as an argument
 * @name: the input name to be printed
 * @f: pointer to function, styled as the function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
