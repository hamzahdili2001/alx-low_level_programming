#include <stdio.h>

/**
 * main - prints all arg passed to arg
 * @argv: array of arguments
 * @argc: length of argv
 * Return: 0
*/


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

