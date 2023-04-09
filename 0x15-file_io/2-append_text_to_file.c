#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appending text into a file
 * @filename: the file
 * @text_content: text to append.
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wsize, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	wsize = write(file, text_content, len);
	if (wsize == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
