#include "sort.h"

/**
 * selection_sort - sorting algorithm function
 * array: arg1
 * size: size of array
*/

void selection_sort(int *array, size_t size)
{
size_t j, i = 0;
int k, temp2;
int temp = array[0];
while (j < size)
{
while (i < size)
{
if (temp > array[i])
{
temp = array[i];
k = i;
}
i++;
}

temp2 = array[j];
array[j] = temp;
array[k] = temp2;

print_array(array, size);
i = j++;
j++;
}
