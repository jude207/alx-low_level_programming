#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concate string together
 * @s1: first parameter
 * @s2: second parameter
 * Return: returns string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	l = i + j;
	s = (char *)malloc(l * sizeof(char) + 1);
	if (s == NULL)
	{
		return (0);
	}
	j = 0;
	while (k < l)
	{
		if (k < i)
		{
			s[k] = s1[k];
		}
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
