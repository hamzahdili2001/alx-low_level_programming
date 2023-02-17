#include <stdio.h>

/**
 * main - runs the program
 * Description: loop on chars and concat them
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
