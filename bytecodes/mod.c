#include "monty.h"

/**
 * _mod - computes the rest of the division of the second top element
 * by the top element of the stack
 * @sp: the stack pointer
 */
void _mod(stack_t **sp)
{
	int md = 0;

	if (!(*sp && *sp != (*sp)->next))
		p_error("L%u: can't mod, stack too short\n", op_env.line_no);
	md = (*sp)->n;
	if (!md)
		p_error("L%u: division by zero\n", op_env.line_no);
	_pop(sp);
	(*sp)->n %= md;
}
