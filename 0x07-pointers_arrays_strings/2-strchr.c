#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - function locates the first occurrence of c
 * @c: char to locater
 * @s: poniter
 * Return: return a pointer to the located character
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
