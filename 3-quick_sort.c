#include "sort.h"

void quick_sort(int *array, size_t size)
{
int pivot = array[size-1];
size_t j = 0;
int temp;
size_t i = size - 1; 

while (j < i)
{
if (pivot < array[j] && pivot < array[i-1])
{
temp = array[j];
array[i] = temp;
array[i-1] = pivot;
}
print_array(array);
i--;
j++;
}

}
