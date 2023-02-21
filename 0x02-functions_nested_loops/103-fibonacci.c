#include <stdio.h>

/**
 * main - Function
 * Description: Fibonacci sequence up to 4,000,000
 * Return: 0.
 */

int main(void)
{
	long int prev, curr, sum, next;

	prev = 1;
	curr = 2;
	sum = 0;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}

		next = prev + curr;

		prev = curr;

		curr = next;
	}
	printf("%ld\n", sum);
	return 0;
}
