#include "monty.h"

op_env_t op_env = {NULL, NULL, NULL, 0, 1, LIFO};

/**
 * main - takes argument list and execute the file
 * @argc:count of argument
 * @argv: list of arguments
 * Return: EXIT_SUCCESS upon success
 */
int main(int argc, char **argv)
{

	ssize_t read = 0;

	if (argc != 2)
		p_error("USAGE: monty file\n");

	if (!freopen(argv[1], "r", stdin))
		p_error("Error: Can't open file %s\n", argv[1]);

	atexit(free_env);

	while ((read = getline(&op_env.line, &op_env.line_sz, stdin)) > 0)
	{
		op_env.argv = tokenize(op_env.line);

		if (op_env.argv && **op_env.argv != '#')
			get_instruction_fn(*op_env.argv)(&op_env.sp);

		free(op_env.argv);
		op_env.argv = NULL;
		op_env.line_no += 1;
	}
	return (EXIT_SUCCESS);
}
