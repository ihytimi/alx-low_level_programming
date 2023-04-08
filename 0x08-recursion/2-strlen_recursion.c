#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: pointer the string
 * Return: int value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
