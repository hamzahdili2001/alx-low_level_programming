#include <stdio.h>

/**
 * main - Function
 * Description: print the first 98 Fibonacci numbers
 * Return: 0.
 */
int main(void)
{
	long int fib1, fib2, fib3, fib4;
	int i;

	fib1 = 1;
	fib2 = 2;

	printf("%ld, %ld, ", fib1, fib2);


	for (i = 3; i <= 98; i += 2)
	{

		fib3 = fib1 + fib2;
		fib4 = fib2 + fib3;

		printf("%ld, %ld, ", fib3, fib4);

		fib1 = fib3;
		fib2 = fib4;
	}
	fib3 = fib1 + fib2;

	printf("%ld\n", fib3);

	return (0);
}
