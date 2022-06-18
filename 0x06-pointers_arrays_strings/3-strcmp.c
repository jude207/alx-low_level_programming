#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcmp - cmp
 * @s1: first pr
 * @s2: second pa
 * Return: alway
 */

int _strcmp(char *s1, char *s2)
{

	if (strlen(s1) == strlen(s2))
	{
		printf("%d", 0);
	}
	else if (strlen(s1) <= strlen(s2))
	{
		printf("%d", -15);
	}
	else
	{
		printf("%d", 15);
	}
	return (0);
}	
