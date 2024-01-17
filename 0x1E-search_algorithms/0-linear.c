#include "search_algos.h"

/**
 * linear_search -  searches for (value)in an arr of int using Linear srch algo
 * @array: first element pointer
 * @size: number of elements (size of array)
 * @value: the value to look for
 * Return: -1 if null or value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
