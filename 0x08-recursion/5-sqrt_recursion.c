#include "main.h"

/**
 * _sqrt_recursion -recursively gets the square
 * @n: param to be sqrt
 * Return: returns sqrt root a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - squared root recursively
 * @n: number input
 * @i: iterator
 * Return: returns an inte
 */

int _sqrt(int n, int i)
{
	int squared = i * i;

	if (squared > n)
	{
		return (-1);
	}
	if (squared == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
