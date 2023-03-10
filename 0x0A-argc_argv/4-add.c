#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two numbers
 * @argc: size of argv
 * @argv: an array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0, i, j;
	char *p;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		j = 0;

		while (p[j])
		{
			if (!isdigit(p[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(p);
	}

	printf("%d\n", sum);


	return (0);
}
