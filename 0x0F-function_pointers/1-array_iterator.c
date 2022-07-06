#include "main.h"
#include <stddef.h>
/**
 * array_iterator - iterate over the array and print
 * @array: param
 * @size: param
 * @action: callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
