#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: the code prints the last digits,
 * of randomly number.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int l_digit;
srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;
	printf("Last digit of %d is %d ", n, l_digit);
	if (l_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (l_digit == o)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0)
}
