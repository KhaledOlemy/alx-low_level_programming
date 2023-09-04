#include <stdio.h>
#include <stdlib.h>
/**                                                                                                      
 * argstostr- this function concatenates argv                                                            
 * passed through pointers to strings                                                                    
 * @ac: this is argc                                                                                     
 * @av: this is argv                                                                                     
 * Return: pointer to string                                                                             
*/
char *argstostr(int ac, char **av)
{
        int j, i = 0, k = 0, cnt = 0, x = 0, n = 0;
        char *ptr;

        if (ac == 0 || av == NULL)
        {
                return (NULL);
        }
        while (cnt < ac)
        {
                if (av[cnt][x] == '\0')
                {
                        cnt += 1;
                        x = 0;
                }
                else
                {
                        x++;
                        n++;
                }
        }
        ptr = malloc(n + 10);
        if (ptr == NULL)
        {
                return (NULL);
        }
        while (i < ac)
        {
                j = 0;
                while (av[i][j] != '\0')
                {
                        ptr[k] = av[i][j];
                        j++;
                        k++;
                }
                ptr[k] = '\n';
                k++;
                i++;
        }
	ptr[k] = '\0';
        return (ptr);
}
