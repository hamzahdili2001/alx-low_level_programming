#include "main.h"
#include <unistd.h>
#include <fcntl.h>
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
	ssize_t file;
	char *buffer;
	ssize_t rsize, wsize;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	rsize = read(file, buffer, letters);
	wsize = write(STDOUT_FILENO, buffer, rsize);

	free(buffer);
	close(file);

	return (wsize);
}

