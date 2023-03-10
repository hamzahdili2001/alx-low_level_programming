#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two values
 * @argc: size of argv
 * @argv: an array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
