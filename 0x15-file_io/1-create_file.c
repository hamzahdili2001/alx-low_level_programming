#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - function that creates a file.
 * @filename: the file we will create
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len, wsize;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		wsize = write(file, text_content, len);
		if (wsize == -1 || (ssize_t)wsize != len)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
