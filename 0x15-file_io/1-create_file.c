#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, count;
	char *buff;

	buff = malloc(sizeof(char) * text_content)
		if (!buff)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	i = 0;
	while (text_content[i])
	{
		count++;
		i++;
	}
	numb_written = write(fd, text_content, coount);
	if (numb_written == -1)
		return (-1);
	close(fd);
	return (1);
}
