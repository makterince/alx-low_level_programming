#include "search_algos.h"

/**
 *binary_search - searches for a value in a sorted array of int
 *@array: pointer
 *@size: number of element
 *@value: value
 *Return: -1 if unsuccessful
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		int mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);  /* Found the value at index mid*/
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);  /* Value not found in the array*/
}

