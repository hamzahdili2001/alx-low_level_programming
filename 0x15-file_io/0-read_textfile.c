#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to
 *								the POSIX standard output
 * @filename: file name
 * @letters: Number of letters it should read and print
 * Return: 0 if the file not opend or read from or NULL,
 *				or failed, or the actual number of letters it
 *				could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t rsize;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
	{
		free(buffer);
		return (0);
	}

	rsize = fread(buffer, sizeof(char), letters, file);

	fclose(file);

	printf("%s", buffer);

	free(buffer);

	return (rsize);
}

