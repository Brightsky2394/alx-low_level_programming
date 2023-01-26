#include "lists.h"
/**
 * free_list - Frees a linked list
 * @head: The pointer to the first node of linked list
 * Return: Nothing
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head;
free(head->str);
head = head->next;
free(tmp);
}
}

