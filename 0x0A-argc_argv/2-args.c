#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the element of the array
 * @argc: number of the array element
 * @argv: array with element
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
