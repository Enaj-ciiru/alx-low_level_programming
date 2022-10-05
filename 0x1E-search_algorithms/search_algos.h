#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t i, size_t j);
int jump_search(int *array, size_t size, int value);
size_t minimum_value(size_t a, size_t b);
int interpolation_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, size_t left,
		size_t right, int value);

/**
  * struct listint_s - singly linked list
  *
  * @n: Integer
  * @index: Index of the node in the list
  * @next: Pointer to the next node
  *
  * Description: singly linked list node structure
  */
typedef struct listint_s
{
	int n;

	size_t index;
	struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);

/**
  * struct skiplist_s - Singly linked list with an express lane
  *
  * @n: Integer
  * @index: Index of the node in the list
  * @next: Pointer to the next node
  * @express: Pointer to the next node in the express lane
  *
  * Description: singly linked list node structure with an express lane
  */
typedef struct skiplist_s
{
	int n;

	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
