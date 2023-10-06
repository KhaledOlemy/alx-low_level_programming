#include "main.h"
/**
 * read_textfile - reads the file and try to print its content
 * @filename: file path with its name to operate on
 * @letters: number of letters to be printed
 *
 * Return: number of character printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_o, r_r, w_w;
	char *str;

	if (!filename || !letters)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (!str)
	{
		return (0);
	}
	o_o = open(filename, O_RDONLY);
	r_r = read(o_o, str, letters);
	w_w = write(STDOUT_FILENO, str, r_r);
	if (o_o == -1 || r_r == -1 || w_w == -1 || w_w != r_r)
	{
		free(str);
		return (0);
	}
	free(str);
	close(o_o);
	return (w_w);
}
