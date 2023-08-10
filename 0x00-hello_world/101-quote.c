#include <stdio.h>
/**
 * main - print without printf or puts
 *
 * Return: 1 (running but, 1)
 */
int main(void)
{
char *string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (*string)
{
putchar(*string++);
}
return (1);
}
