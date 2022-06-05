#include <stdio.h>
#include <stdlib.h>

/**
 *main -  program that prints the alphabet in lowercase
 *Return: will always return zero
*/

int main(void)
{
	char low_alb;

	for (low_alb = 'a' ; low_alb <= 'z' ; low_alb++)
	{
		putchar(low_alb);
	}
	putchar('\n');
	return (0);
}
