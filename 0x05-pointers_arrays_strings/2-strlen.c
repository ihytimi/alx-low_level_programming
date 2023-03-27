#include "main.h"

/**
 * _strien - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: lendth of string
 */

int _strien(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
