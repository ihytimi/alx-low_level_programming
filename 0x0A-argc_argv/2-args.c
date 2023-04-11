#include <stdio.h>

/**
 * main - prints all the arguments a program receives
 * @argc: number of command arguements
 * @argv: size of arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
