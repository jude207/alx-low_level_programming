#include <stdio.h>
#include <stdlib.h>

/**
 *main -prints the alphabet in lowercase, and then in uppercase
 *Return: always o
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
