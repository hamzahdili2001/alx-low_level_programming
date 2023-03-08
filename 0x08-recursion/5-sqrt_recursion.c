/**
 * _sqrt_recursion_helper - recursive helper function for _sqrt_recursion
 * @n: the number to compute the square root of
 * @low: the lower bound of the binary search
 * @high: the upper bound of the binary search
 *
 * Return: the square root of n if it is a perfect square, otherwise -1
 */

int _sqrt_recursion_helper(int n, int low, int high)
{
	int mid, square;

	if (low > high)
		return (-1);


	mid = (low + high) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (_sqrt_recursion_helper(n, mid + 1, high));
	else
		return (_sqrt_recursion_helper(n, low, mid - 1));
}

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the square root of n if it is a perfect square, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursion_helper(n, 1, n));
}


