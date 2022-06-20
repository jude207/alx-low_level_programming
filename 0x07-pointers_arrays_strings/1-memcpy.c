#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies a memory
 * @dest: destination we are copying to
 * @src: source we are copying from
 * @n: number of memory we copyi
 * Return: returns result after copying
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
