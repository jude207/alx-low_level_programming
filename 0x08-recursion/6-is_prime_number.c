#include "main.h"

/**
 * is _prime_number - checks if a number is prime
 * @n: only param
 * Return: returns true or false
 */
int is _prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - it checks to see if a number is prime
 * @n: first param
 * @i: second param an iterator
 * Return: returns a 1 or 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
