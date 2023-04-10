#include "main.h"
#include <stdio.h>

/**
 * main - prints its number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
