#include "search_algos.h"
/**
  * linear_search - use linear algo
  * @array: ptr to first element
  * @size: no. of eles in array
  * @value: value to search for
  *
  * Return: first index of values, or -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; (i < size) && (array); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
