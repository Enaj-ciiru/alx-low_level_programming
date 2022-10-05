#include "search_algos.h"
/**
  * binary_search - using binary algo
  * @array: ptr to first element
  * @size: no. of eles of array
  * @value: target value
  *
  * Return: index, or -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, j;
	int m;

	i = 0;
	j = size - 1;
	while ((i <= j) && (array))
	{
		print_array(array, i, j);
		m = (int)((i + j) / 2);
		if (array[m] < value)
		{
			i = m + 1;
		}
		else if (array[m] > value)
		{
			j = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}

/**
  * print_array - print elements of an array
  * @array: array's element to be displayed
  * @i: beginning
  * @j: end
  */
void print_array(int *array, size_t i, size_t j)
{
	size_t idx;

	printf("Searching in array: ");
	for (idx = i; idx < j; idx++)
		printf("%d, ", array[idx]);
	printf("%d\n", array[idx]);
}
