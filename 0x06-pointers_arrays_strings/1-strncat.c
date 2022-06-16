#include "main.h"
#include <string.h>

/**
 * _strncat - a function that appends char of some num
 * @dest: first param input
 * @src: 2nd input parameter
 * @n: last input parameter
 * Return: returns dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
