#include "main.h"

/**
 * print_most_number - prints number excluding 2 and 4
 */

void print_most_numbers(void)
{
	int i = 0;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + 48);
		}
		_putchar('\n');
	}
}	
