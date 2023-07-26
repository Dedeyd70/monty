#include "monty.h"

/**
 * _rotr - rotates the stack to the bottom
 * @sp: the stack pointer
 */
void _rotr(stack_t **sp)
{
	if (*sp)
		*sp = (*sp)->next;
}
