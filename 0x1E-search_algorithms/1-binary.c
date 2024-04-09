#include "search_algos.h"

/**
 * recursive_search - searches for a avlue in an array of sorted
 * integers using the Binary Search Algorithm
 *
 * @array: Input array
 * @size: size of the array
 * @value: value to search for in the array
 * Return: Index of the number
*/
int recursive_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	printf("Searching in array");

	for (i = 0; i < size; i++)
	{
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	}
	printf("\n");

	if (mid && size % 2 == 0)
	{
		mid--;
	}

	if (value == array[mid])
	{
		return ((int)mid);
	}

	if (value < array[mid])
	{
		return (recursive_search(array, mid, value));
	}
	mid++;

	return (recursive_search(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - Searches for a value in a sorted array of
 * integers using Binary Search Algorithm
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to search for in the sorted array
 * Return: Index of the number
*/
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
	{
		return (-1);
	}
	return (index);
}
