#include "main.h"

/**
 * _puts - protects a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

