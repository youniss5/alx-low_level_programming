#ifndef search_algos_h
#define search_algos_h

#include <stdio.h>
#include <stdio.h>

/**
 * struct listint - linked list
 * @n: Int
 * @index: node index
 * @next: next node pointer
 * Description: singly linked list
 */
typedef struct listint
{
	int n;
	size_t index;
	struct listint *next;
} listint;

/**
 * struct skiplist - linked list with (express lane)
 * @n: Int
 * @index: Index node
 * @next: next node pointer
 * @express: Pointer to the next node in ( express lane)
 * Description: singgly linked list node with  (express lane)
 */
typedef struct skiplist
{
	int n;
	size_t index;
	struct skiplist *next;
	struct skiplist *express;
} skiplist;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int size);
listint *jump_list(listint *list, size_t size, int value);
skiplist *linear_skip(skiplist *list, int value);

#endif
