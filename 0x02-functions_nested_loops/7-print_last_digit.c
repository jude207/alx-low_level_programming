#include "main.h"

/**
 * print_last_digit - of a number
 * @n: the parameter of the function
 * Return: returns the last number of n
 */

int print_last_digit(int n)
{
	int n_last;

	n_last = n % 10;
	_putchar(n_last + '0');
	return (n_last);
}
