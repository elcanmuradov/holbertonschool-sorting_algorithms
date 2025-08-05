#include "sort.h"

/**
 * insertion_sort_list - funct
 * @list: arg1
*/

void insertion_sort_list(listint_t **list)
{
int i, j, temp, index, *complist;
i = 0;
j = 0;
temp = list[0];
while (list[i] != '\0')
{
complist[i] = temp;
while (j <= i)
{
if (list[j] > list[j + 1])
{
temp = list[j]
complist[j] = list[j + 1];
complist[j + 1] = temp;
}	
j++;
}
print_list(complist);
i++;
}

}
