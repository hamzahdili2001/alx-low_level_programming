#include <stdio.h>

/**
 * main - runs the program
 * Description: writing alphabet with two for loops
 * Return: 0
*/

int main(void)
{
	int l, u;

	for (l = 97; l <= 122; l++)
	{
		putchar(l);
	}

	for (u = 65; u <= 90; u++)
	{
		putchar(u);
	}
	putchar(10);

	return (0);
}
