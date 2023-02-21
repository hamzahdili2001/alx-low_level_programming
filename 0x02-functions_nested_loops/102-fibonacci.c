#include <stdio.h>
/**
 * main - Function
 * Description: first 50 Fibonacci numbers
 * Return: 0.
 */

int main(void)
{
	int previous, current, i;

	previous = 1;
	current = 2;

	printf("%d, %d, ", previous, current);

	/*int i;*/

	for (i = 3; i <= 50; i++)
	{
		int next;

		next = previous + current;

		printf("%d", next);

		if (i != 50)
		{
			printf(", ");
		}
		previous = current;
		current = next;
	}
	printf("\n");
	return (0);
}

