#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - i] == ' ' ||
				str[index - i] == '\t' ||
				str[index - i] == '\n' ||
				str[index - i] == ',' ||
				str[index - i] == ';' ||
				str[index - i] == '_' ||
				str[index - i] == '!' ||
				str[index - i] == '?' ||
				str[index - i] == '"' ||
				str[index - i] == '(' ||
				str[index - i] == ')' ||
				str[index - i] == '{' ||
				str[index - i] == '}' ||
				index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}
