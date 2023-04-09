#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - appending text into a file
 * @filename: the file
 * @text_content: text to append.
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");

	if (text_content != NULL)
		fputs(text_content, file);

	fclose(file);
	return (1);
}
