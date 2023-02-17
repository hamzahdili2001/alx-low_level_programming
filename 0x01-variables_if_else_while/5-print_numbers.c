#include <stdio.h>

/**
 * main - runs the program
 * Description: it a program that prints all base 10 digits
 * Return: 0
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}

	putchar(10);

	return (0);
}
