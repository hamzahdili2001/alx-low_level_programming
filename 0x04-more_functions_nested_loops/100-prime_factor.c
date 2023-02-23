#include <stdio.h>
#include <math.h>

/**
 * main - tests all numbers from 2 to the square root of the target number n
 *
 * Return: 0
*/

int main(void)
{
	long n, i;

	n = 612852475143;
	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	if (n > 1)
	{
		printf("%ld\n", n);
	}
	else
	{
		printf("%ld\n", i - 1);
	}

	return (0);
}

