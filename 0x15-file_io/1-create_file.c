#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: file to read and print
 * @text_content: content text
 *
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{

int file_d, wr, len = 0;

	if (filename == NULL)
		return (-1);
file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (file_d == -1)
{
return (-1);
}
if (text_content != NULL)
{
	for (len = 0; text_content[len]; len++)
		;
}
	wr = write(file_d, text_content, len);
	if (file_d == -1 || wr == -1)
		return (-1);
	close(file_d);
	return (1);
}
