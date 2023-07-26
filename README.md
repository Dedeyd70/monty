# Monty

`Monty 0.98` is a scripting language that is first compiled into Monty byte codes(just like Python). It relies on a unique stack, with specific instructions to manipulate it.

__This project seeks to create an interpreter for Monty ByteCodes files.__
	*Files in this project with the Monty Bytecodes have the .m extension. There are not more than one instruction per line.*

## More About the Monty Language
This language contains specific instructions to manipulate data information (stacks and queues), where each instruction (called opcode) is sended per line.

## Usage
to compile all files:

```bash
gcc -Wall _Werror -Wextra -pedantic *.c -o monty
```

to run monty:
```bash
./monty <filename> 
```

## Features
### Opcodes
`monty` executes the following opcodes:

| Opcode | Description |
| -------- | ----------- |
| `push` | Pushes an element to the stack |
| `pall` | Prints all the values on the stack |
| `pint` | Prints the value at the top of the stack |
| `pop` | Removes the top element of the stack |
| `swap` | Swaps the top two elements of the stack |
| `stack` | Sets the format of the data to a stack (LIFO) |
| `queue` | Sets the format of the data to a queue (FIFO) |
| `add` | Adds the top two elements of the stack |
| `sub` | Subtracts the top element of the stack from the second top element |
| `nop` | It does nothing |
|`div` | Divides the second top element of the stack by the top element of the stack |
|`mul` | Multiplies the second top element of the stack with the top element of the stack |
| `mod` | Computes the rest of the division of the second top element by the top element of the stack |
|`pstr` | Prints the stings starting at the top of the stack |
|`pchar` | Prints the char at the top of the stack |
|`rotr` | Rotates the stack to the buttom |
|`rotl` | Rotates the stack to the top |

comments, indicated with `#`, are not executed by the interpreter.

### Return value
When there is no errors, `monty` returns `0` otherwise it returns `1`

## Authors
* Dorothy Dede Quao [GitHub] (https://github.com/Dedeyd70)
* Freda Tsorme-Dzebu [GitHub] (https://github.com/Kelsy3)
