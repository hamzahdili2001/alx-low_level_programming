#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: Nothing
*/
int get_endianness(void)
{
	union u u;

	u.i = 1;

	return (u.arr[0] == 1 ? 1 : 0);

}
