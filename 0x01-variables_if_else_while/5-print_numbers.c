#include <stdio.h>
#include <stdlib.h>

/**
*main-prints all single digit numbers of base 10 starting
*from 0, followed by a new line.
*Return: alwat returns 0
*/

int main(void)
{
	int s_num;

	for (s_num = 0; s_num <= 9; s_num++)
	{
		printf("%d", s_num);
	}
	printf("\n");
	return (0);
}
