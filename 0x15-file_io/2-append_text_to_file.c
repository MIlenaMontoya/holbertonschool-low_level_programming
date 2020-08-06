#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to read and print
 * @text_content: number of letter
 *
 * Return: number of letters
 */

int append_text_to_file(const char *filename, char *text_content)
{
       int file_d, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_d = open(filename, O_WRONLY | O_APPEND);
	wr = write(file_d, text_content, len);

	if (file_d == -1 || wr == -1)
		return (-1);

	close(file_d);

	return (1);
}
