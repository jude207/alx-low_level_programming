#include "main.h"

/**
 * print_sign - print a positive or negative sign
 * @n: take in an int
 * Return: returns 0,1,-1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
