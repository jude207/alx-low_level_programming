#include "main.h"

/**
 * rev_string - reverses word
 * @s: parameter of the function
 */

void rev_string(char *s)
{
	int i;
	int mid;
	int j;

	i = 0;
	j = 0;
	while (s[i + 1] != '\0')
		i++;

	mid = (i + 1) / 2;
	while (j < mid)
	{
		char temp = s[j];
		*(s + j) = s[i];
		*(s + i) = temp;
		j++;
		i--;
	}
}
