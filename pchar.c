#include "monty.h"

/**
 * _pchar - prints the car at the top of the stack
 * @sp: the stack pointer
 */
void _pchar(stack_t **sp)
{
	if (*sp)
	{
		if ((*sp)->n > 0 && (*sp)->n < 128)
			printf("%c\n", (*sp)->n);
		else
			p_error("L%u: can't pchar, value out of range\n", op_env.line_no);
	}
	else
		p_error("L%u: can't pchar, stack empty\n", op_env.line_no);


}
