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

	for (start = n; start <= 98; start++)
	{
		printf("%d, ", start);
	}
	putchar(10);
}

