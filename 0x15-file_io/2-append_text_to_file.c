#include "main.h"
/**
 * append_text_to_file - add text to a file
 * @filename: name of the file
 * @text_content: text contents to be appended
 * Return: 1 on success and -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count, fd, numb_written;

	if (!filename)
		return (-1);
	fd = open(filename, O-WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		count = 0;
		while (text_content[count])
			count++;
		numb_written = write(fd, text_content, count);
		if (numb_written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
