#include <stdio.h>

/**
 * main - function
 * Description: write a - z in reverse
 * Return: 0
*/

int main(void)
{
	int a; /* 97 to 122 */

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar(10);

	return (0);
}
