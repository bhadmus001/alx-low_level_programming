#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: file to be read
 * @letters: number of characters to read
 * Return: 0 or number of characters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numb_read, numb_written;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	numb_read = read(fd, buffer,letters);
	if (numb_read == -1)
		return (0);
	numb_written = write(1, buffer, numb_read);
	if (numb_written == -1)
		return (0);
	close(fd);
	return (numb_written);
}
