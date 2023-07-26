#include "monty.h"

/**
 * _swap - swapping the top two elements of the stack
 * @sp: the stack pointer
 */
void _swap(stack_t **sp)
{
	stack_t *j = *sp;

	if (!(j && j != j->next))
		p_error("L%u: can't swap, stack too short\n", op_env.line_no);

	j->n ^= j->prev->n;
	j->prev->n ^= j->n;
	j->n ^= j->prev->n;
}
