#include <unistd.h>

/**
 * _putchar - functions like putchar form stdio.h
 * @c: char
 * Return: char
*/
char _putchar(char c)
{
	return (write(1, &c, 1));
}
