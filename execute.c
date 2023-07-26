#include "monty.h"

/**
 * do_instruction - get the function associated with an opcode
 * @opcode: opcode to match
 * Return: NULL if opcode is NULL
 */
instruction_fn get_instruction_fn(const char *opcode)
{
	static instruction_t instructions[] = {
		{"add",   _add},
		{"div",   _div},
		{"mod",   _mod},
		{"mul",   _mul},
		{"nop",   _nop},
		{"pall",  _pall},
		{"pchar", _pchar},
		{"pint",  _pint},
		{"pop",   _pop},
		{"pstr",  _pstr},
		{"push",  _push},
		{"queue", _queue},
		{"rotl",  _rotl},
		{"rotr",  _rotr},
		{"stack", _stack},
		{"sub",   _sub},
		{"swap",  _swap},
		{0}
	};
	instruction_t *op = instructions;

	if (opcode)
	{
		while (op->opcode)
		{
			if (!strcmp(opcode, op->opcode))
				return (op->fn);
			++op;
		}
		p_error("L%u: unknown instruction %s\n", op_env.line_no, opcode);
	}
	return (NULL);
}
