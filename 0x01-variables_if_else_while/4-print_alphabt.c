#include <stdio.h>
#include <stdlib.h>

/**
 *main -program that prints the alphabet in lowercase
 *Return: alway 0
*/

int main(void)
{
	char l_a;

	for (l_a = 'a'; (l_a = 'z'); l_a++)
	{
		putchar(l_a);
	}
	putchar('\n');
	return (0);
}
