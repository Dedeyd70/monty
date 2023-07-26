#include "monty.h"

/**
 * free_env - clearing the stack operation environment
 */
void free_env(void)
{
	free_stack(&op_env.sp);
	free(op_env.argv);
	free(op_env.line);
	op_env.argv = NULL;
	op_env.line = NULL;
}

/**
 * free_stack - frees the stack
 * @sp: pointer to a pointer
 */
void free_stack(stack_t **sp)
{
	stack_t *tp = NULL;

	if (sp && *sp)
	{
		tp = *sp;
		tp->next->prev = NULL;
		do {
			*sp = tp->prev;
			free(tp);
		} while ((tp = *sp));
	}
}
