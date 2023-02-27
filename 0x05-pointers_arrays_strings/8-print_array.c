#include <stdio.h>
/**
 * print_array - prints elements in array
 * @a:array
 * @n: number of elements in array
*/

void print_array(int *a, int n)
{

	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", *(a + i));

		if (n > 0)
			printf(", ");
	}
	printf("\n");
}

