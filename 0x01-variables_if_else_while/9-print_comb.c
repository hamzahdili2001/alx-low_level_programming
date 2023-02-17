#include <stdio.h>

/**
 * main - runs the program
 * Description: from 0 - 9 with comas
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);

	return (0);
}
