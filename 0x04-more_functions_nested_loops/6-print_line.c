#include "main.h"

/**
 * print_line - prints line
 * @n: takes in n as i put
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(i + 95);
		}
	}
	_putchar('\n');
}
