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
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	r1 = open(argv[1], O_RDONLY);
	if (r1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	r2 = open(argv[2], O_RDONLY);
	if (r2 == -1)
	{o = open(argv[2], O_CREAT | O_WRONLY, 0664); }
	else
	{o = open(argv[2], O_TRUNC | O_WRONLY); }
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = create_buffer(argv[2]);
	r = read(r1, buffer, 1024);
	while (r > 0)
	{
		printf("---------------");
		w = write(o, buffer, r);
		if (w == -1)
		{
			printf("hi");
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(r1, buffer, 1024);
		o = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(r1);
	close_file(r2);
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
