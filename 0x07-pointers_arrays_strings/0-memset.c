#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - set the memory of variable
 * @s: ponter to the memory
 * @b: the value to be set.
 * @n: the number of bytes to be set
 * Return: set memory values::
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
