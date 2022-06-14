#include "main.h"

/**
 * _put - print any string given
 * @str: input to the function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
