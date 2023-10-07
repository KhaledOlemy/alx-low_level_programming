#include "main.h"
/**
 * create_file - create a file, writes @text_content into
 * it and change its permission,
 * if the file exits, don't change its permissions, just
 * truncate the file, and write @text_content.
 * @filename: filename on which to opeate on
 * @text_content: text to be entered into file
 *
 * Return:	1 if everything is fine
 *		-1 if not.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, c, w;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		c = open(filename, O_WRONLY | O_CREAT, 0600);
		if (c == -1)
		{
			return (-1);
		}
		if (text_content)
		{
			w = write(c, text_content, strlen(text_content));
			if (w == -1)
			{
				return (-1);
			}
		}
	}
	else
	{
		c = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
		if (text_content)
		{
			w = write(c, text_content, strlen(text_content));
			if (w == -1)
			{
				return (-1);
			}
			w = write(w, "\0", 1);
		}
	}
	close(c);
	return (1);
}
