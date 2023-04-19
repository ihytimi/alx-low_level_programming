#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum of a and b
 * @a: integer
 * @b: integer
 * Return: nothing
 */

int op_add(int a, int b)
{
	return (a + b)
}

/**
 * op_sub - difference between a and b
 * @a: integer
 * @b: integer
 * Return: nothing
 */

int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - result of the division
 * @a: integer
 * @b: integer
 * Return: nothing
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
