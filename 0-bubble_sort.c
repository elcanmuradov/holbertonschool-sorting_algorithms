#include "sort.h"
#include <stdio.h>
#include <stddef.h>
/**
 * bubble_sort - sorts an array of integers in ascending order using bubble sort
 * @array: pointer to the array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size){
size_t i=0;
int temp;
int swapped;
size_t j;
if(size < 2 || array == NULL)
return;

while(i<size-1){
swapped=0;
j = 0;
while (j < size - i - 1)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swapped = 1;
}
j++;
}
print_array(array,size);
if(!swapped)
break;
i++;
}
}
