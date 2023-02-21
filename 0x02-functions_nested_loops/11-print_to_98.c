#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Function
 * Description: print all natural number from n to 98
 * @n: start number
 * Return: 0
 */
void print_to_98(int n)
{
	int start;

	if (n > 98)
	{
		for (start = n; start >= 98; start--)
		{
			if (start != 98)
			{
				printf("%d, ", start);
			}
			else
			{
				printf("%d", start);
			}
		}
	}
	else
	{
		for (start = n; start <= 98; start++)
		{
			if (start != 98)
			{
				printf("%d, ", start);
			}
			else
			{
				printf("%d", start);
			}
		}
	}

	putchar(10);
}

