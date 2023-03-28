#include <stdio.h>

/**
 * swap_int-swaps the values of 2 integers.
 * @a: the 1st integer to be swapped.
 * @b: the 2nd integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
	/* the function that swaps the values of two integers. */
{
	int temp = *a
	*a = *b;
	*b = temp;
}
