#include <stdio.h>

/**
 * main - prints name of the file
 * @argc: length of arguments in the array
 * @argv: an array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

