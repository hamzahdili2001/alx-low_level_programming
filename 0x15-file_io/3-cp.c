#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 * errorHandler - Handling Error msgs and codes
 * @msg: Message to display
 * @code: code number
 * @string: Formated string in the Message
 * Return: Nothing
*/

void errorHandler(char *msg, int code, char *string)
{
	dprintf(STDERR_FILENO, msg, string);
	exit(code);
}

/**
 * main - copie given file to dest
 * @argc: number of arguments
 * @argv: array of arguments "FILE, file_from, file_to"
 * Return: 0 in sucsess or exit with code if someting goes wrong
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, rsize, wsize;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		errorHandler("Error: Can't read from file %s\n", 98, argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		errorHandler("Error: Can't write to %s\n", 99, argv[2]);

	while ((rsize = read(file_from, buffer, BUFFER_SIZE)) != 0)
	{
		if (rsize == -1)
			errorHandler("Error: Can't read from file %s\n", 98, argv[1]);

		wsize = write(file_to, buffer, rsize);
		if (wsize == -1)
			errorHandler("Error: Can't write to %s\n", 99, argv[2]);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
