#include "main.h"

/**
 * more_numbers -> prints more numbers
 */

void more_numbers(void)
{
	int y, z;

	for (y = 0; y < 10; y++)
	{
		for (z = 0; z < 15; z++)
		{
			_putchar(z + '0');
		}	
		_putchar('\n');
	}
}
