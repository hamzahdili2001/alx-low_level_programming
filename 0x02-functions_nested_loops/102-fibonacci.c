#include <stdio.h>
/**
 * main - Function
 * Description: first 50 Fibonacci numbers
 * Return: 0.
 */

int main(void)
{
	int a, b, c, i;

	a = 1;
	b = 2;

	printf("%d, %d,", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;


		printf(", %d", c);

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

