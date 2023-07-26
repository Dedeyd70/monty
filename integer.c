#include "monty.h"

/**
 * integer - check if a string represents an integer
 * @str: str to check
 * Return: if str represents an integer return 1, else 0
 */
int integer(const char *str)
{
	if (*str == '-' || *str == '+')
		++str;

	if (!*str)
		return (0);

	while (isdigit(*str))
		++str;

	return (!*str);
}
