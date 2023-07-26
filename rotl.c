#include "monty.h"

/**
 * _rotl - rotates the stack at the top
 * @sp: the stack pointer
 */
void _rotl(stack_t **sp)
{
	if (*sp)
		*sp = (*sp)->prev;
}

