#include "monty.h"

/**
 * _pop - Removing the top element of the stack
 * @sp:the stack pointer
 */
void _pop(stack_t **sp)
{
	stack_t *tp = NULL;

	if (!*sp)
		p_error("L%u: can't pop an empty stack\n", op_env.line_no);

	if (*sp != (*sp)->prev)
	{
		tp = (*sp)->prev;
		(*sp)->next->prev = tp;
		tp->next = (*sp)->next;
	}
	free(*sp);
	*sp = tp;
}

