#include <stdlib.h>
/**
 * print_name - function that callback another function
 * Description: the function takes a pointer to the
 * name and a pointer to function
 * @name: name as pointer to string
 * @f: a function that do something to the name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
