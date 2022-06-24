#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file
 * @argc: is the number element our argv can hold
 * @argv: an array that hold element we pass in
 * Return: returns nothing
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
