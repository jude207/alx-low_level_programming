#include "main.h"

/**
 * _print_rev_recursion - it reverse any given string recursively
 * @s: input string value
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
