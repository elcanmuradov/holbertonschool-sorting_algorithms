#include "sort.h"
#include <stdio.h>
#include <stddef.h>
/**
 * bubble_sort - funct
 * @array: arg1
 * @size: arg2
*/

void bubble_sort(int *array, size_t size)
{
size_t i = 0;
size_t j = 0;
int temp;

while (i < size - 1)
{

while (j < size - 1)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
}
print_array(array, size);
j++;
}

i++;
}

}
