#include "sort.h"

/**
 * swap_nodes - Swaps two adjacent nodes in a doubly linked list
 * @list: Double pointer to the head of the list
 * @node1: First node to swap
 * @node2: Second node to swap
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
iif (!node1 || !node2)
return;
if (node1->prev)
node1->prev->next = node2;
else
*list = node2;
if (node2->next)
node2->next->prev = node1;
node2->prev = node1->prev;
node1->next = node2->next;
node1->prev = node2;
node2->next = node1;
}

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *temp;

if (!list || !*list || !(*list)->next)
return;
current = (*list)->next;
while (current)
{
temp = current->next;
while (current->prev && current->n < current->prev->n)
{
swap_nodes(list, current->prev, current);
print_list(*list);
}

current = temp;
}
}
