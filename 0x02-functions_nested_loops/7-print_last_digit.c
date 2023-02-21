#include "main.h"

/**
 * print_last_digit - Function
 * Description: get the last value of number
 * @d: the giving value
 * Return: the value.
 */
int print_last_digit(int d)
{
	int last_number;

	last_number = d % 10;

	if (last_number < 0)
	{
		_putchar(-last_number + 48);
		return (-last_number);
	}
	else
	{
		_putchar(last_number + 48);
		return (last_number);
	}
}

