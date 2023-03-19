#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: this code prints the last digits,
 * of a randomly number.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int 1_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1_digit = n % 10;
	printf("Last digit of %d is %d", n, 1_digit);
	if (1_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (1_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0)
}
