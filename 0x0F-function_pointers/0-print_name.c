#include "main.h"

/**
 * print_name - prints a name
 * @name: param
 * @f: call back function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
