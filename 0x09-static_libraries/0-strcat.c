#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to resulting string @dest
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
int length_of_string, z;

length_of_string = 0;
while (dest[length_of_strength] != '\0')
{
length_of_string++;
}
for (z = 0; src[z] != '\0'; z++, length_of_string++)
{
dest[length_of_string] = src[j];
}
dest[length_of_string] = '\0';
return (dest);
}
