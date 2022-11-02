#include "search_algos.h" 
 
 
 /** 
   * binary_search - Searches for a value in a sorted array 
   *                 of integers using binary search. 
   * @array: A pointer to the first element of the array to search. 
   * @size: The number of elements in the array. 
   * @value: The value to search for. 
   * 
   * Return: If the value is not present or the array is NULL, -1. 
   *         Otherwise, the index where the value is located. 
   * 
   * Description: Prints the [sub]array being searched after each change. 
   */ 
int binary_search(int *array, size_t size, int value)
{
	unsigned int lowerLimit = 0;
	unsigned int upperLimit = size - 1;
	unsigned int middle, i;

	if (array == NULL)
		return (-1);
	while (lowerLimit <= upperLimit)
	{
		printf("Searching in array: ");
		for (i = lowerLimit; i <= upperLimit; i++)
		{
			printf("%d", array[i]);
			if (i < upperLimit)
				printf(", ");
			else
				printf("\n");
		}
		middle = (lowerLimit + upperLimit) / 2;
		if (arrray[middle] == value)
			return (middle);
		if (array[middle] < value)
			lowerLimit = middle + 1;
		if (array[middle] > value)
			upperLimit = middle - 1;

 	} 
 
 
 	return (-1); 
 } 


