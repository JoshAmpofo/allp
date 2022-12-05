#include "main.h"

/**
 * append_text_to_file - append text to end of file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success
 * -1 on failure(file does not have required write perm)
 * if text_content is NULL, add nothing to file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* create variables to open, write and find length of str */
	int opn, wr, str_len = 0;

	/* set fail condition for filename */
	if (filename == NULL)
		return (-1);
	/* find length of text_content */
	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len];)
			str_len++;
	}
	/* open, write and append to file */
	opn = open(filename, O_WRONLY | O_APPEND);
	wr = write(opn, text_content, str_len);
	/* set fail conditions */
	if (opn == -1 || wr == -1)
		return (-1);
	/* close file */
	close(opn);

	return (1); /* on success */
}
