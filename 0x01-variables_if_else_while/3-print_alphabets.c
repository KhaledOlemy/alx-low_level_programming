#include <stdio.h>
/**
 * main- this is for printing Alphabet
 *
 * Return 0, always success
 */
int main(void)
{
        char s;
        s = 97;
        while (s < 123)
        {
                putchar(s);
                s++;
        }
        s = 65;
        while (s < 91)
        {
                putchar(s);
                s++;
        }
        putchar('\n');
	return(0)
}
