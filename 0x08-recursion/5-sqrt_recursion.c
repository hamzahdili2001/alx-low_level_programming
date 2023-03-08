/**
 * _sqrt_helper - recursive helper function for _sqrt_recursion
 * @n: the number to compute the square root of
 * @guess: guessing number to guess the the square root
 *
 * Return: prefect square root
 */

int _sqrt_helper(int n, int guess)
{

	if (n < 0 || guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return (guess);


	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the square root of n if it is a perfect square, otherwise -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

