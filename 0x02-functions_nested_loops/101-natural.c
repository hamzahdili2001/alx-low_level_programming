#include <stdio.h>

/**
 * main - Function
 * Description: Nature made the natural numbers; All else is the work of women
 * Return: 0
 */

int main(void)
{
	int sum, i;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}

