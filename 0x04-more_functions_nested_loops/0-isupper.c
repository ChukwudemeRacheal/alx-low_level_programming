#include <unistd.h>

/**
 * _isupper - check if a letter is upper
 * @c: The number to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(char x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
