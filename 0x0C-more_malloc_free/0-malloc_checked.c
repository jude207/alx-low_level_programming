#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - checking malloc memory
 * @b: parameter
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
