#include "main.h"

/**
 * *create_array - create an array of chars and intialize it
 * @size: size of array
 * @c: initialize char
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size --)
		n[size] = c;

	return (n);
}
