#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add to number
 * @a: number 1
 * @b: number 2
 * Return: sum of two number
*/
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - sub two number
 * @a: number 1
 * @b: number 2
 * Return: sub of two number
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: number 1
 * @b: number 2
 * Return: multiply of two number
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two number
 * @a: number 1
 * @b: number 2
 * Return: divition of two numbers
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulize two numbers
 * @a: number 1
 * @b: number 2
 * Return: modulo of two numbers
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
