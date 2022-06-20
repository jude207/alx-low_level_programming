#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - spans the initial part of the null-terminated
 * @s: first param
 * @accept: second param
 * Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
