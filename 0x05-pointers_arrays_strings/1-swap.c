#include <stdio.h>

/**
 * swap_int-swaps the values of 2 integers.
 * the 1st integer to be swapped.
 * the 2nd integer to be swapped.
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
	/* the function that swaps the values of two intrgers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
