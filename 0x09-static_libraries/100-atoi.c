#include <stdio.h>
#include <limits.h>
/**
 * _atoi -convert string to integer
 * @s: string given
 * Return: integer
*/


int _atoi(char *s)
{
	unsigned int sign = 1, num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
		s++;
	}

	return (sign * num);
}
