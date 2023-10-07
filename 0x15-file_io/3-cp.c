#include "main.h"
/**
 * main - this function replaces cp function made in linux
 * @argc: number of entered arguments
 * @argv: actual arguments enetered in a for of an array
 *
 * Return:	0:		on success
 *		anything else:	on error
 */
int main(int argc, char *argv[])
{
	int r, r1, r2, o, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	r1 = open(argv[1], O_RDONLY);
	negative_one_check(r1, "r", argv[1]);
	r2 = open(argv[2], O_RDONLY);
	if (r2 == -1)
	{
		o = open(argv[2], O_CREAT | O_WRONLY, 0664);
	}
	else
	{
		o = open(argv[2], O_TRUNC | O_WRONLY);
	}
	negative_one_check(o, "o", argv[2]);
	buffer = create_buffer(argv[2]);
	r = read(r1, buffer, 1024);
	negative_one_check(r, "r", argv[2]);
	while (r > 0)
	{
		w = write(o, buffer, r);
		if (w == -1)
		{
			free(buffer);
			negative_one_check(w, "w", argv[2]);
		}
		r = read(r1, buffer, 1024);
		negative_one_check(r, "r", argv[2]);
		o = open(argv[2], O_WRONLY | O_APPEND);
		negative_one_check(o, "o", argv[2]);
	}
	free(buffer);
	close_file(r1);
	close_file(o);
	return (0);
}
/**
 * create_buffer - creates a buffer of 1024 bytes
 * to easen and control memory more efficiently
 * during copying
 * @file: file to create buffer for
 *
 * Return: buffer
 */
char *create_buffer(char *file)
{
	char *temp_buffer;

	temp_buffer = malloc(1024 * sizeof(char));
	if (!temp_buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (temp_buffer);
}
/**
 * close_file - closes opened file before
 * @fd: point where the file is currently at to close
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * negative_one_check - exits main function each according to each error type
 * @n: number to check
 * @mode: mode to check on
 * @str: name of the file
 */
void negative_one_check(int n, char *mode, char *str)
{
	if (n == -1)
	{
		if (_strcmp(mode, "r") == 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(98);
		}
		if (_strcmp(mode, "o") == 0 || _strcmp(mode, "w") == 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(99);
		}
	}
}
/**
 * _strcmp- this function compares 2 strings
 * @s1: this is the first input string to be compared.
 * @s2: this is the second input string to be compared.
 * Return:
 * 0 if the 2 strings are the same
 * + if first non matching char is s1 is higher in ascii value than in s2
 * - if first non matching char is s1 is lower in ascii value than in s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, out;
	char x;

	out = 999;
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s1[j] == s2[j])
		{
			continue;
		}
		else
		{
			x = s1[j] - s2[j];
			out = (int) x;
			break;
		}
	}
	if (out == 999)
	{
		out = 0;
	}
	return (out);
}
