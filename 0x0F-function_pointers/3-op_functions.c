#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the deference of two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the deference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiple of the two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the multiple of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return the divission of the two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the divisible of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the first number
 * @b: the second number
 *
 * Return: number a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
