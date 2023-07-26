#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @sp: stack pointer
 */
void _push(stack_t **sp)
{
	stack_t *new = NULL;
	const char *n_str = op_env.argv[1];

	if (!(n_str && integer(n_str)))
		p_error("L%u: usage: push integer\n", op_env.line_no);

	new = malloc(sizeof(*new));
	if (!new)
		p_error("Error: malloc failed\n");

	new->n = atoi(n_str);
	if (*sp)
	{
		new->prev = (*sp);
		new->next = (*sp)->next;
		new->next->prev = new;
		(*sp)->next = new;
		if (op_env.mode == LIFO)
			(*sp) = new;
	}
	else
	{
		new->prev = new;
		new->next = new;
		(*sp) = new;
	}
}


/**
 * _pall - prints the values on the stack, starting from the top of the stack
 * @sp: the stack pointer
 */
void _pall(stack_t **sp)
{
	stack_t *j = NULL;

	if (*sp)
	{
		(*sp)->next->prev = NULL;

		for (j = *sp; j; j = j->prev)
			printf("%d\n", j->n);

		(*sp)->next->prev = *sp;
	}
}
