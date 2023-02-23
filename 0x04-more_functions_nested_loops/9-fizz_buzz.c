#include <stdio.h>

/**
 * main - FizzBuzz Algorithm
 *
 * Return: 0
*/

int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	/*Man the checker is like some b*t* */
	for (n = 2; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}

	}
	putchar(10);
	return (0);
}

