#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Function.
 * Description: prints times table form n number with conditions
 * @n: the giving value
 * Return: 0
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int result;

				result = i * j;

				if (j == 0)
				{
					printf("%d", result);
				}
				else
				{
					printf(",%4d", result);
				}
			}
			printf("\n");
		}
	}
}
