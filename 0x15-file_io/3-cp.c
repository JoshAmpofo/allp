#include "main.h"
/**
 * create_buffer - allocate 1024 bytes to a specific buffer
 * @filename: name of file buffer is storing chars for.
 * Return: allocated buffer size
 */
char *create_buffer(char *filename)
{
	char *bufr;

	bufr = malloc(sizeof(char) * 1024); /* allocate memory to buffer */
	if (bufr == NULL) /* malloc fails */
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (bufr);
}
/**
 * close_file - close file descriptors when done with operation
 * @fd: file descriptor to close
 * Return: void
 */
void close_file(int fd)
{
	int close_var;

	close_var = close(fd); /* close file descriptor */
	if (close_var == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copy file from one buffer to another
 * @argc: cmdline argument count
 * @argv: argument vector (file to copy from and to)
 * Return: On success, 0.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]); /* call buffer */
	file_from = open(argv[1], O_RDONLY); /* open file_from */
	rd = read(file_from, buffer, 1024); /* read file_to */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(file_to, buffer, rd);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(file_from, buffer, 1024); /* read from file_from */
		file_to = open(argv[2], O_WRONLY | O_APPEND); /* create append command */
	} while (rd > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
