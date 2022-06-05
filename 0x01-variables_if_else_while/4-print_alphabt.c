#include <stdio.h>
#include <stdlib.h>

/**
 *main -program that prints the alphabet in lowercase
 *Return: alway 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
