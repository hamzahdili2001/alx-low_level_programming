
/**
 * factorial - calculate the factorial of n
 * @n: Number
 * Return: factorial
*/

int factorial(int n)
{

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

