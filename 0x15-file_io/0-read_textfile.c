#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This filename prints STDOUT.
 * @filename: This text file is read
 * @letters: accurate number of letters read
 * Return: w- num of bytes read and prints
 *        0 as failure or filename as NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

