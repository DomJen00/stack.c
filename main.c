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