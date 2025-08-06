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

if (!array || size < 2)
return;

j = 0;
while (j < size - 1)
{
k = j;
temp = array[j];
i = j + 1;
while (i < size)
{
if (temp > array[i])
{
temp = array[i];
k = i;
}
i++;
}
if (k != j)
{
temp2 = array[j];
array[j] = temp;
array[k] = temp2;
print_array(array, size);
}
j++;
}
}
