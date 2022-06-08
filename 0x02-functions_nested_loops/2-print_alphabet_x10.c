#include "main.h"

/**
 * print_alphabet_x10- print alphabets a-z 10 times
 *
 */

void print_alphabet_x10(void)
{
	char alb;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (alb = 'a'; alb <= 'z'; alb++)
		{
			_putchar(alb);
		}
		_putchar('\n');
	}
}
