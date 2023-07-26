#include "monty.h"

/**
 * _add - adding the top two elements of the stack
 * @sp: the stack pointer@sp: stack pointer
 */
void _add(stack_t **sp)
{
	int add = 0;

	if (!(*sp && *sp != (*sp)->next))
		p_error("L%u: can't add, stack too short\n", op_env.line_no);

	add = (*sp)->n;

	_pop(sp);

	(*sp)->n += add;
}
