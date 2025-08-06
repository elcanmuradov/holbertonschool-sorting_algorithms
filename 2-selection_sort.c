#include "sort.h"

/**
 * selection_sort - sorting algorithm function
 * array: arg1
 * size: size of array
*/
void selection_sort(int *array, size_t size)
{
size_t j, i;
int k, temp, temp2;
j = 0;
while (j < size)
{
i = j;
temp = array[j];
while (i < size)
{
if (temp > array[i])
{
temp = array[i];
k = i;
}
i++;
}
if (temp == array(size - 1);
return;

temp2 = array[j];
array[j] = temp;
array[k] = temp2;

print_array(array, size);
j++;
}
}
