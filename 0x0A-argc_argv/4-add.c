#include <stdio.h>
#include <stdlib.h>

/**
 * main - add number in an array
 * @argc: first param
 * @argv: ssecond param
 * Return: results
 */

int main(int argc, char *argv[])
{
	int num, j, result = 0;
	int coins[j];

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < argc && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
