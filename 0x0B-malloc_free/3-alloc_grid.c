#include <stdlib.h>
/**
 * alloc_grid - makes a 2D array by allocating space for width and height
 * @width: width of the array
 * @height: height of the.. you know
 * Return: Read the Code you will understand
*/

int **alloc_grid(int width, int height)
{
	int **d2Array = NULL, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	d2Array = malloc(height * sizeof(int *));
	if (d2Array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		d2Array[i] = malloc(width * sizeof(int));

		if (d2Array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(d2Array[j]);
			}
			free(d2Array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			d2Array[i][j] = 0;
	}
	return (d2Array);
}

