#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int *left = a;
	int *right;

	right = &a[n - 1];
	left = a;

	while(left < right)
	{
		*left ^= *right;
		*right ^= *left;
		*left ^= *right;

		left++;
		right--;
		
	}	
}	
