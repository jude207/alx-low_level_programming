#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of string argv has
 * @argc: the number of string element in argv
 * @argv: array of string
 * Return: returns 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
