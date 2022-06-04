#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * print the last digit of the number stored in the variable n.
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 ", n, l);
	}
	if (l == 0)
	}
		printf("last digit of %d is %d", n, l);
	}
	if (l < 6 && l != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, l);
	return (0);
	}
}
