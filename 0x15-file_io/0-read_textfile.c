#include "main.h"
#include <stddef.h>
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
	size_t rsize, wsize;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	rsize = fread(buffer, sizeof(char), letters, file);
	if (rsize < letters && ferror(file))
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[rsize] = '\0';
	wsize = fwrite(buffer, sizeof(char), rsize, stdout);
	free(buffer);
	fclose(file);

	return ((wsize == rsize) ? rsize : 0);
}

