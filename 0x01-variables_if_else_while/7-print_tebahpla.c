#include <stdio.h>

/**
 * main- a program to reverse lower case alhabets
 * Return: returns 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	return (0);
}
