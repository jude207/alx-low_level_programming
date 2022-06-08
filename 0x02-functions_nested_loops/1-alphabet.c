#include "main.h"

/**
 * print_alphabet - prints alhabets in lower case
 */

void print_alphabet(void)
{
	char alb;

	for (alb = 'a'; alb <= 'z'; alb++)
	{
		_putchar(alb);
	}
	_putchar('\n');
}
