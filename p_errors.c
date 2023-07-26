#include "monty.h"

/**
 * p_error - Printing an error message
 * @fmt: the format string
 * @...: The format string parameter
 */
void p_error(const char *fmt, ...)
{
	va_list args;

	va_start(args, fmt);

	vfprintf(stderr, fmt, args);

	va_end(args);

	exit(EXIT_FAILURE);
}
