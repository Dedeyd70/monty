#include "monty.h"

/**
 * tokenize - splitting a str into words
 * @str: string to tokenize
 * Return: an array of words(tokens) extracted from the input str,
 * or NULL if memory allocation fails or the input str is empty
 */
char **tokenize(char *str)
{
	char **tkns = NULL;
	size_t cnt = 0;

	if (!str)
		return (NULL);

	cnt = count_words(str);
	if (!cnt)
		return (NULL);

	tkns = malloc(sizeof(char *) * (cnt + 1));
	if (!tkns)
		return (NULL);

	for (cnt = 0; *str; ++cnt)
	{
		while (isspace(*str))
			*str++ = '\0';
		if (*str)
			tkns[cnt] = str;
		else
			break;
		do {
			++str;
		} while (*str && !isspace(*str));
	}
	tkns[cnt] = NULL;

	return (tkns);
}
