#include <stdio.h>

/**
 * main - Function
 * Description: first 50 fibonacci numbers
 * Return: 0
 */

int main()
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

