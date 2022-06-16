#include "main.h"
#include <string.h>

/**
 * _strncpy - for copying a given number of char
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: returns a char
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
