#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of qtwo number
 * @argc: first param number of element
 * @argv: second params
 * Return: 0 0r i
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
