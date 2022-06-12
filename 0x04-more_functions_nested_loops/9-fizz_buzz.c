#include <stdio.h>

/**
 * main - program that print fizz and buzz in
 * place of 3 and 5
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
