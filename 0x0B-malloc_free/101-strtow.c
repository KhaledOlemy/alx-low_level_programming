#include <stdio.h>
#include <stdlib.h>

/**
 * word_counter- this calculates the number of words in a string
 * @str: input string
 * Return: word count
 */
int word_counter(char *str)
{
	int i, is_it_word, words;

	is_it_word = 0;
	words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			is_it_word = 0;
		else if (is_it_word == 0)
		{
			is_it_word = 1;
			words++;
		}
	}
	return (words);
}
/**
 * strtow- this function splits sentence into words
 * splitted on " "
 * @str: input string
 * Return: pointer to the start of the array
 * that holds the strings(words)
 */
char **strtow(char *str)
{
	char **ptr, *temp;
	int i, j, counter, length, words;
	int op, term;

	j = 0;
	counter = 0;
	length = 0;
	while (str[length] != '\0')
		{length++; }
	words = word_counter(str);
	if (length == 0 || str == NULL || words == 0)
	{return (NULL); }

	ptr = malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		{return (NULL); }
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (counter)
			{
				term = i;
				temp = malloc(sizeof(char) * (counter + 1));
				if (temp == NULL)
					{return (NULL); }
				while (op < term)
					{*temp++ = str[op++]; }
				*temp = '\0';
				ptr[j] = temp - counter;
				j++;
				counter = 0;
			}
		}
		else if (counter++ == 0)
			{op = i; }
	}
	ptr[j] = NULL;
	return (ptr);
}
