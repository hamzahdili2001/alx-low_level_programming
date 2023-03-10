#include <stdio.h>

/**
 * main - prints numbers of arguments passed to file
 * @argc: numbers of values
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
