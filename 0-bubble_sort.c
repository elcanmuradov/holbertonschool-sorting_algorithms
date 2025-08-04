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
size_t j;
int temp;

while (i < size - 1)
{
j = 0;
while (j < size - i - 1)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
}
j++;
}
print_array(array, size);
i++;
}

}
