#include "main.h"

/**
 * _strlen_recursion - prints the lenght of a string recursively
 * @s: string parameter to be entered
 * Return: returns the numberi:set nuber
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
