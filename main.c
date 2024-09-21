/**
 * @file main.c
 * @brief Example usage of a simple stack implementation in C.
 *
 * This file demonstrates how to use the stack functions defined in stack.h.
 * It creates a stack, performs basic operations like pushing and popping values,
 * and safely destroys the stack after use. The stack is implemented with a
 * fixed-size array to store integers.
 *
 * Example flow:
 * - Creates a new stack.
 * - Pushes a value onto the stack.
 * - Pops the value off the stack.
 * - Destroys the stack to free memory.
 *
 * The program ensures that the stack is created and destroyed properly, preventing
 * memory leaks or dangling pointers.
 *
 * @author Dominic Jenni
 * @date 21.09.2024
 *
 */

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	Stack_t* stack = create();
	if (stack == NULL) {
		// Handle memory allocation failure
		printf("Failed to create stack\n");
		return 1;
	}

	push(1, stack);
	pop(stack);
	destroy(&stack);

	return 0;
}