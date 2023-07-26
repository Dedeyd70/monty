#include "monty.h"

/**
 * _sub - subtracts the top element from the second top element of the stack
 * @sp: the stack pointer
 */
void _sub(stack_t **sp)
{
	int sub = 0;

	if (!(*sp && *sp != (*sp)->next))
		p_error("L%u: can't sub, stack too short\n", op_env.line_no);
	sub = (*sp)->n;
	_pop(sp);
	(*sp)->n -= sub;
}
