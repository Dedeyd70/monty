#include "monty.h"

/**
 * _pstr - print the string starting at the top of the stack
 * @sp: the stack pointer
 */
void _pstr(stack_t **sp)
{
	stack_t *j = NULL;

	if (*sp)
	{
		(*sp)->next->prev = NULL;
		for (j = *sp; j && j->n > 0 && j->n < 128; j = j->prev)
			putchar(j->n);
		(*sp)->next->prev = *sp;
	}
	putchar('\n');
}
