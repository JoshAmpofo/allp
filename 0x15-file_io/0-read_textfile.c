#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @letters: num of leters to read and print
 * @filename: pointer to name of file
 *
 * Return: letters to stdout and actual num of letters read and printed
 * 0 if filename is NULL, if write fails or does not write
 * expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* create variables to open, read, and write to stdout */
	ssize_t fd, r, w;
	char *buffer; /* to hold text */

	if (filename == NULL)
		return (0);
	/* allocate memory to buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* open, read and write */
	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	/* set alt condition if RWO fails */
	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer); /* free malloc */
		return (0);
	}

	free(buffer); /* else */
	close(fd);

	return (w); /* print to stdout */
}
