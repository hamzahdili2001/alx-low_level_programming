#include <stdio.h>

/**
 * main - main function
 * Description: numbers 00 - 89
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		int d1, d2;

		d1 = i / 10;
		d2 = i % 10;

		if (d1 < d2)
		{
			if (i != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(d1 + '0');
			putchar(d2 + '0');
		}
	}
	putchar(10);
	return (0);
}
