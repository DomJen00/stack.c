/**
 * @file stack.c
 * @brief Implementation of a simple stack in C.
 *
 * This file provides the implementation of the stack operations defined in
 * stack.h. It includes functions to create, destroy, push, pop, and check if
 * the stack is empty. The stack uses a fixed-size array to store integers.
 *
 * @author Dominic Jenni
 * @date 21.09.2024
 * 
 */

#include "stack.h"
#include <limits.h>
#include <stdlib.h>

Stack_t* create() {
	Stack_t* stack = (Stack_t*)malloc(sizeof(Stack_t));
	if (stack != NULL) {
		stack->sp = -1;
	}
	
	return stack;
}

void destroy(Stack_t** stack) {
	free(*stack);
	*stack = NULL;			// Avoid dangling pointer
}

void push(int value, Stack_t* stack) {
	if (stack != NULL && stack->sp < (NUM_OF_ELEMENTS - 1)) {
		stack->values[++(stack->sp)] = value;
	}
}

int pop(Stack_t* stack) {
	if (stack != NULL && !isEmpty(stack)) {
		return stack->values[(stack->sp)--];
	}
	
	return INT_MIN;
}

int isEmpty(Stack_t* stack) {
	return (stack == NULL || stack->sp < 0);
}