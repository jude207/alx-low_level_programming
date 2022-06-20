#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function locates the first occurrence in the strings
 * of any of the bytes in the string accept.
 * @s: first param
 * @accept: second param
 * Return: returns a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
