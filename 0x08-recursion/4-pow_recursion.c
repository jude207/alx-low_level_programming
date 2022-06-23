#include "main.h"

/**
 * _pow_recursion - using recursion to find power
 * @x: base number
 * @y: power number
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
