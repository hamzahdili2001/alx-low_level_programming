#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
/* First I am Proud of what i did here */

/**
 * checkArg - this function checks if the arguments passed are 3
 * @count: is the arguments count
 *
 * Return: 0 if the check did not fail
*/

int checkArg(int count)
{
	if (count < 3 || count > 3)
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}


/**
 * checkNum - this function check if the strings passed as an arguments
 * if all the strings are digits the everything is fine
 * else it print Error and exit with the code of 98
 * @str1: the first stirng
 * @str2: the second string
 *
 * Return: nothing just checking
*/
void checkNum(char *str1, char *str2)
{
	int len1 = strlen(str1), len2 = strlen(str2), i = 0;

	for (i = 0; i < len1; i++)
	{
		if (!isdigit(str1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; i < len2; i++)
	{
		if (!isdigit(str2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
}

/**
 * initMemory - this function makes memory for the result
 * @size: is the size of length of two strings
 * Return: a pointer the the first elements of the array
*/

char *initMemory(int size)
{
	int i;
	char *array;

	array = malloc((size + 2) * sizeof(char));
	if (array == NULL)
		return (NULL);


	for (i = 0; i < size + 2; i++)
	{
		array[i] = '0';
	}

	return (array);
}
/**
 * multiply - here where the magic happens
 * this function takes num1 and num2 which are the stirng passed as argv
 * it loop trough every character and multiply it with the other one
 * and push the result of all into the array that i initMemory above
 * @num1: is the first argument
 * @num2: is the second argument
 * @array: is an array of zeros i initalize it above
 * Return: nothing
*/
void *multiply(char *num1, char *num2, char *array)
{
	int p, i, j, len1 = strlen(num1), len2 = strlen(num2);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			p = (num1[i] - '0') * (num2[j] - '0') + (array[i + j + 1] - '0');
			array[i + j + 1] = p % 10 + '0';
			array[i + j] += p / 10;
		}
	}

	for (i = 0; i < len1 + len2; i++)
	{
		if (array[i] != '0')
		{
			printf("%c", array[i]);
		}
	}
	printf("\n");

	return ("0");
}

/**
 * main - this where the program call all the functions
 * @argc: length of arguments passed
 * @argv: an array of arguments passed
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int len1 = strlen(argv[1]) - 1, len2 = strlen(argv[2]) - 1;
	char *array;

	checkArg(argc);
	checkNum(argv[1], argv[2]);
	array = initMemory(len1 + len2);
	multiply(argv[1], argv[2], array);

	return (0);
}

