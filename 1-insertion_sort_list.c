#include "sort.h"

/**
 * insertion_sort_list - funct
 * @list: arg1
*/

void insertion_sort_list(listint_t **list)
{
int i, temp; 
listint_t complist;
i = 0;
while (*list)
{
if (list->n > list->next->n)
{
temp = list->n;
complist->n = list->next->n;
complist->next->n = temp;
}
list = list->next;
i++;
print_list(complist);
}
}
