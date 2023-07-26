#include "monty.h"

/**
 * _mul - multiples the second top element with the top element of the stack
 * @sp: the stack pointer
 */
void _mul(stack_t **sp)
{
	int mul = 0;

	if (!(*sp && *sp != (*sp)->next))
		p_error("L%u: can't mul, stack too short\n", op_env.line_no);
	mul = (*sp)->n;
	_pop(sp);
	(*sp)->n *= mul;
}
