#include "main.h"
/**
 * append_text_to_file - appends @text_content to a @filename
 * @filename: file to which append
 * @text_content: content to be appended
 *
 * Return:	1 if everything is okay
 *		-1 if something fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, c, w;

	if (!filename)
	{
		return (-1);
	}
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		return (-1);
	}
	c = open(filename, O_APPEND | O_WRONLY);
	if (c == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		w = write(c, text_content, strlen(text_content));
	}
	if (w == -1)
	{
		return (-1);
	}
	return (1);
}
