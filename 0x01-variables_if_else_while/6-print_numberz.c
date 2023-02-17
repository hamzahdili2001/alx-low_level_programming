#include <stdio.h>

/**
 * main - function
 * Description: base 10 with putchar
 * Return: 0
*/

int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}

	putchar(10);

	return (0);
}
