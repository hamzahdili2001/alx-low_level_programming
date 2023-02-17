#include <stdio.h>

/**
 * main - runs the program
 * Desription: form 012 - 789 with commas
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		int d1,d2,d3;

		d1 = i / 100;
		d2 = (i / 10) % 10;
		d3 = i % 10;

		if (i != 12 && 1 != 102 && i != 120 && i != 101
			 && i != 210)
		{
			if (i != 123)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar(d1 + '0');
		putchar(d2 + '0');
		putchar(d3 + '0')
	}

	putchar(10);
	return (0);
}
