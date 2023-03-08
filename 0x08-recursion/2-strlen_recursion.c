
/**
* _strlen_recursion - prints length of string
* @str: string
* Return: length of str
*/


int _strlen_recursion(char *str)
{

	if (*str == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(str + 1));
}

