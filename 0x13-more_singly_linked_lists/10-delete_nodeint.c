#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Function
 * @head: pointer to pointer of type listint_t
 * @index: unsigned int, index to remove
 * Description: deletes the node at index index of a listint_t linked list.
 * Return: Number of elements in list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 1;
listint_t *new = *head, *temp;
if (!head || !*head)
	return (-1);
if (index == 0)
{
*head = new->next;
free(new);
return (1);
}
temp = *head;
while (temp)
{
if (count == index)
{
new = temp->next;
temp->next = new->next;
free(new);
return (1);
}
temp = temp->next;
count++;
}
return (-1);
}
