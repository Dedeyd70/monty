#include "monty.h"

/**
 * _stack - sets the format of the data to a stack(LIFO)
 * @sp: the stack pointer
 */
void _stack(stack_t **sp __attribute__((unused)))
{
	op_env.mode = LIFO;
}


/**
 * _queue - sets the format of the data to a queue(FIFO)
 * @sp: the stack pointer
 */
void _queue(stack_t **sp __attribute__((unused)))
{
	op_env.mode = FIFO;
}
