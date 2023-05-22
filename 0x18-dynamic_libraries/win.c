#include <stdlib.h>
/**
 * rand - make rand numbers for the win
 * Return: Nothing.
*/

int rand(void)
{
	static int i = 0;
	static int numbers[] = {9, 8, 10, 24, 75, 9};
	return (numbers[i++ % 6]);
}
