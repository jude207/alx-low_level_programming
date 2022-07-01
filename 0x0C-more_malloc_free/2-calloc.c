#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - internal call of calloc library
 * @nmemb: first param
 * @size: second param
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memm;
	char *fill;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memm = malloc(size * nmemb);
	if (memm == NULL)
		return (NULL);
	fill = memm;
	for (index = 0; index < (size * nmemb); index++)
	{
		fill[index] = '\0';
	}
	return (memm);
}
