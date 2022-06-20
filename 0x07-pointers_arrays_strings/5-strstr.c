#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - function finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: first param
 * @needle: second param
 * Return: return apointer to the begining of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
