#include <stdio.h>

/**
 * main - function
 * Desciption: base 16 in lowercase
 * Return: 0
*/

int main(void)
{
	/* 97 - 102 */
	int c;
	/* 48 - 57 */
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}

	putchar(10);
	return (0);
}
