#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates numbers to crack password
 * Return: 0.
 */

int main(void)
{
        int sum;
	char cr;

	srand(time(NULL));
	
	while (sum <= 2645)
	{
		cr = rand() % 128;
		
		sum += cr;
		putchar(cr);
	}
	putchar(2772 - sum);
	
	return (0);
}

