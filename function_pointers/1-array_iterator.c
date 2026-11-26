#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a  functtion to print the elements in array
 * @array: the array to iterate over
 * @size: the size of the array
 *@action: the function to execute on each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{     
       	size_t i = 0;

       	while (i < size)
	{	
        	action(array[i]);
        	i++;
	}
}
