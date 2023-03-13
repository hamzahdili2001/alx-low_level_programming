#include <stdlib.h>
/**
 * alloc_grid - makes a 2D array by allocating space for width and height
 * @width: width of the array
 * @height: height of the.. you know
 * Return: Read the Code you will understand
*/

int **alloc_grid(int width, int height)
{
	int **d2Arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	d2Arr = malloc(height * sizeof(int *));

	if (d2Arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		d2Arr[i] = malloc(width * sizeof(int));

		if (d2Arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(d2Arr[j]);
			}
			free(d2Arr[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			d2Arr[i][j] = 0;
		}
	}
	return (d2Arr);
}
