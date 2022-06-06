#include <stdio.h>

/**
 * main- prints the hexadecimal character
 * Return: returns 0
 */

int main(void)
{
	char i;
	char z;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}	
