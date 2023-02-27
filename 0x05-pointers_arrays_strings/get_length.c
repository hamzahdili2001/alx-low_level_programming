#include "main.h"

/**
 * get_length - Gets the length of String
 * @str: the string
 * Return: length of str
*/

int get_length(char *str)
{
        unsigned int length;

        length = 0;

        while (*(str + length) != '\0')
        {
                length++;
        }
        return (length);
}
