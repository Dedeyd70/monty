#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Team task for Martin and Samuel
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

typedef void (*instruction_fn)(stack_t **);

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @fn: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	instruction_fn fn;
} instruction_t;

/**
 * enum stack_mode_n - stack mode enumeration
 * @LIFO: operate as a stack
 * @FIFO: operate as a queue
 */
typedef enum stack_mode_n
{
	LIFO = 0,
	FIFO = 1
} stack_mode_t;

/**
 * struct op_env_s - operation environment
 * @sp: top of the stack
 * @argv: argument vector
 * @line: line buffer
 * @line_sz: line buffer size
 * @line_no: line number
 * @mode: stack operation mode
 */
typedef struct op_env_s
{
	stack_t *sp;
	char **argv;
	char *line;
	size_t line_sz;
	size_t line_no;
	stack_mode_t mode;
} op_env_t;

extern op_env_t op_env;

/** main functions **/
instruction_fn get_instruction_fn(const char *opcode);
void _add(stack_t **sp);
void _div(stack_t **sp);
void _mod(stack_t **sp);
void _mul(stack_t **sp);
void _nop(stack_t **sp);
void _pall(stack_t **sp);
void _pchar(stack_t **sp);
void _pint(stack_t **sp);
void _pop(stack_t **sp);
void _pstr(stack_t **sp);
void _push(stack_t **sp);
void _queue(stack_t **sp);
void _rotl(stack_t **sp);
void _rotr(stack_t **sp);
void _stack(stack_t **sp);
void _sub(stack_t **sp);
void _swap(stack_t **sp);

 /** other functions **/
char **tokenize(char *str);
size_t count_words(const char *str);
void free_env(void);
void free_stack(stack_t **sp);
void p_error(const char *fmt, ...);
int integer(const char *str);

#endif
