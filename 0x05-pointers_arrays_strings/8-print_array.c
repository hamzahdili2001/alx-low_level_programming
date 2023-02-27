#include <stdio.h>
/**
 * print_array - prints elements in array
 * @a:array
 * @n: number of elements in array
*/

void print_array(int *a, int n)
{

	int i;

	if(n == 0)
		printf("%d\n", *(a + 0));
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d\n", *(a + i));
			else
				printf("%d, ", *(a + i));
		}
	}
}

