#include "monty.h"

/**
 * count_words - count the words in a string
 * @str: string to evaluate
 * Return: the number of tokens in a string
 */
size_t count_words(const char *str)
{
	size_t cnt = 0;

	while (*str)
	{
		while (isspace(*str))
			++str;
		if (!*str)
			break;
		do {
			++str;
		} while (*str && !isspace(*str));

		++cnt;
	}
	return (cnt);
}

