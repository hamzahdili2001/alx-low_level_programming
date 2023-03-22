#include <stdlib.h>
#include <stdio.h>

#define x "%02hhx"

/**
 * main - prints opcodes
 * @argc: size of argument passed to the array
 * @argv: array of arguments
 * Return: 0 if the condition cool
*/

int main(int argc, char *argv[])
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;

	while (i < num)
	{
		printf(x, *((char *)main + i));

		if (i < (num - 1))
			putchar(' ');
		else
			putchar(10);

		++i;
	}

	return (0);
}

