#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main in start.c
 * @line_cnt: amount of lines
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))

{
	print_stack(*stack);
}
