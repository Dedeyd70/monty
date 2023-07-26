#include "monty.h"

/**
 * _pint -  Printing the value at the top of the stack
 * @sp: the stack pointer
 */
void _pint(stack_t **sp)
{
	if (*sp)
		printf("%d\n", (*sp)->n);
	else
		p_error("L%u: can't pint, stack empty\n", op_env.line_no);
}
