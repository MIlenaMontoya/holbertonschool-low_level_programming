#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the std output
 * @filename: file to read and print
 * @letters: number of letter
 *
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t rd, wr;
char *str;
int aux;
if (filename == NULL)
return (0);
aux = open(filename, O_RDONLY);
if (aux == -1)
{
close(aux);
return (0);
}

str = malloc(letters * sizeof(char));
if (str == NULL)
return (0);

rd = read(aux, str, letters);
close(aux);

if (rd == -1)
{
free(str);
return (0);
}
wr = write(STDOUT_FILENO, str, rd);
free(str);
return (wr);
}

