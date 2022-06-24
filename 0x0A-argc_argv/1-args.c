#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of string argv has
 * @argc: the number of string element in argv
 * @argv: array of string
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (argv != NULL)
	{
		printf("%d\n", argc);
	}
	return (0);
}
