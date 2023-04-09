#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
*        0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t d;
	ssize_t z;
	ssize_t j;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	j = read(d, b, letters);
	z = write(STDOUT_FILENO, b, j);

	free(b);
	close(d);
	return (z);
}
