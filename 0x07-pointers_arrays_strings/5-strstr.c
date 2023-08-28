#include <stdio.h>
/**
 * _strstr- this function searches for the needle in haystack
 * @haystack: this is the entire string to search in
 * @needle: this is the string to search for
 * Return: pointer to the substring matching needle inside the
 * haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr1, *ptr2;
	int i, j;

	ptr1 = haystack;
	ptr2 = needle;
	for (i = 0; ptr1[i] != '\0'; i++)
	{
		for (j = 0; ptr2[j] != '\0'; j++)
		{
			if (ptr1[i + j] != ptr2[j])
			{
				break;
			}
		}
		if (ptr2[j] == '\0')
		{
			return (&ptr1[i]);
		}
	}
	return (NULL);
}
