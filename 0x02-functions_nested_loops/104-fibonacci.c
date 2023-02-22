#include <stdio.h>

/**
 * main - Function
 * Description: print the first 98 Fibonacci numbers
 * Return: 0.
 */

int main(void)
{
	int c;
	long int previousFibonacci = 1, currentFibonacci = 2, nextFibonacci;

	printf("%ld, %ld", previousFibonacci, currentFibonacci);

	for (c = 0; c < 96; c++)
	{
		if (currentFibonacci < 0)
		{
			break;
		}
		else if (currentFibonacci < 1000000000)
		{
			nextFibonacci = previousFibonacci + currentFibonacci;
			printf(", %ld", nextFibonacci);
			previousFibonacci = currentFibonacci;
			currentFibonacci = nextFibonacci;
		}

		else
		{

			long int carry = (previousFibonacci + currentFibonacci) / 1000000000;
			long int nextLowerPart = (previousFibonacci + currentFibonacci)
			% 1000000000;

			nextFibonacci = currentFibonacci + carry;
			printf(", %ld%09ld", nextFibonacci, nextLowerPart);
			previousFibonacci = currentFibonacci;
			currentFibonacci = nextFibonacci;
		}
	}
	printf("\n");
	return (0);
}

