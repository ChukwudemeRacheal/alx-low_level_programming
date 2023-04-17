#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	i = ABC(-98) * 10;
	j = ABC(98) * 10;
	printf("%d, %d\n", i, j);
	return (0);
}
