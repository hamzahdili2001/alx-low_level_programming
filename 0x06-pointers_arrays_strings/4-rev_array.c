/**
 * reverse_array - reverse array
 * @a: the array
 * @n: number of integers in the array
 * Return: Reversed array
*/

void reverse_array(int *a, int n)
{
	int index1, index2, t;

	for (index1 = 0; index1 < n - 1; index1++)
	{
		for (index2 = index1 + 1; index2 > 0; index2--)
		{
			t = *(a + index2);
			*(a + index2) = *(a + (index2 - 1));
			*(a + (index2 - 1)) = t;
		}
	}

}

