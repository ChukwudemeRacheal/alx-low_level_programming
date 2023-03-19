#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints an alphabet in lower case, followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{

	char abc;

	for (abc = 'a'; abc <= 'Z'; ++abc)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
