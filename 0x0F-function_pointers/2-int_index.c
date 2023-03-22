#include <ctype.h>
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer function that checkes for an integer match
 * Return: -1 if size <= 0 or no element get matched
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
