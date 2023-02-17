#include <stdio.h>

/**
 * main - runs the program
 * Description: writing alphabet exept q and e
* Return: 0
*/

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 113 || a == 101)
		{
			continue;
		}
		else
		{
			putchar(a);
		}
	}
	putchar(10);

	return (0);
}
