#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that print out all the numbers passed to it
 * @separator: a char seperate numbers
 * @n: numbers count
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d", va_arg(args, int));
			if (separator == NULL)
				printf(" ");
			else
				printf("%s", separator);
		}
		else
			printf("%d\n", va_arg(args, int));

	}
	va_end(args);
}
