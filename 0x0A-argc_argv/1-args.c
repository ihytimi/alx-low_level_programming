#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: number of arguments
 * @argv: pointer to a list of command line arguments
 * Return: 0 on success, -1 on fail
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
