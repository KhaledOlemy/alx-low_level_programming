#include <stdio.h>
char *_strstr(char *haystack, char *needle)
{
	char *ptr1, *ptr2, *ptr3;

	ptr3 = NULL;
	ptr1 = needle;
	while (*ptr1 != '\0')
	{
		if (*ptr2 == '\0')
		{
			ptr2 = haystack;
		}
		while (*ptr2 != '\0')
		{
			if (*ptr2 == *ptr1)
			{
				if (ptr3 == NULL)
				{
					ptr3 = ptr1 - 1;
				}
				ptr2 += 1;
				break;				
			}
			else
			{
				ptr2 += 1;
			}
		}
		ptr1 += 1;
	}
	return (ptr3);
}
