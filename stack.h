/**
 * @file stack.h
 * @brief A simple stack implementation in C.
 *
 * This header defines a basic stack data structure that stores integers and
 * provides standard stack operations such as push, pop, and checking if the stack
 * is empty. The stack is implemented using a fixed-size array.
 *
 * @author Dominic Jenni
 * @date 21.09.2024
 *
 */

#ifndef stack_h
#define stack_h

#define NUM_OF_ELEMENTS		100

// Structure representing a stack
typedef struct {
	int values[NUM_OF_ELEMENTS];
	int sp;
}Stack_t;

/**
 * @brief Creates a new stack instance.
 *
 * This function allocates memory for a new stack and initializes it. The stack
 * pointer is set to -1, indicating that the stack is empty.
 *
 * @return: A pointer to the newly created Stack_t instance, or NULL if memory allocation fails.
 */
Stack_t* create();

/**
 * @brief Destroys the stack and frees its allocated memory.
 *
 * This function frees the memory allocated for the stack and sets the pointer
 * to `NULL` to avoid dangling pointers. It ensures that the stack is no longer
 * accessible.
 *
 * @param stack: A pointer to the pointer of the stack to be destroyed.
 */
void destroy(Stack_t** stack);

/**
 * @brief Pushes a value onto the stack.
 *
 * Adds the specified value to the top of the stack if there is space. If the
 * stack is full, no operation is performed.
 *
 * @param value: The integer value to push onto the stack.
 * @param stack: A pointer to the stack on which the value should be pushed.
 */
void push(int value, Stack_t* stack);

/**
 * @brief Pops the top value from the stack.
 *
 * Returns the value at the top of the stack. If the stack is empty,
 * a sentinel value (e.g., `INT_MIN`) is returned to indicate an error.
 *
 * @param stack: A pointer to the stack from which the value should be popped.
 * @return: The value at the top of the stack, or a sentinel value if the stack is empty.
 */
int pop(Stack_t* stack);

/**
 * @brief Checks if the stack is empty.
 *
 * This function checks whether the stack is currently empty (i.e., no elements
 * are stored).
 *
 * @param stack: A pointer to the stack to check.
 * @return: 1 if the stack is empty, 0 otherwise.
 */
int isEmpty(Stack_t* stack);

#endif