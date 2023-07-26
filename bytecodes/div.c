#include "monty.h"

/**
 * _div - divides the second top element by the top element of the stack
 * @sp: the stack pointer
 */
void _div(stack_t **sp)
{
	int div = 0;

	if (!(*sp && *sp != (*sp)->next))
		p_error("L%u: can't div, stack too short\n", op_env.line_no);

	div = (*sp)->n;
	if (!div)
		p_error("L%u: division by zero\n", op_env.line_no);

	_pop(sp);

	(*sp)->n /= div;
}
