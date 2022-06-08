#include "main.h"

/**
 * _isalpha - checks if a character entered is an alphab.
 * @c: our function takes charcter input c.
 * Return: returns true or false
 */

int _isalpha(int c)
{
	return ((c => 'A' && c <= 'Z') || (c => 'a' && c <= 'z'));
}
