#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * create_array - allocate memory to the char
 * @size: length of the char
 * @c: char to be allocated memory
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	p = (char *)malloc(sizeof(char) * (size));
	if (p == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
