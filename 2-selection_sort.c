#include "sort.h"

/**
 * selection_sort - sorting algorithm function
 * array: arg1
 * size: size of array
*/
// 19, 48, 99, 71, 13, 52, 96, 73, 86, 7
// temp 19
// i 4 13 19.13 temp 13
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

temp2 = array[j];
array[j] = temp;
array[k] = temp2;

print_array(array, size);
j++;
}
}
