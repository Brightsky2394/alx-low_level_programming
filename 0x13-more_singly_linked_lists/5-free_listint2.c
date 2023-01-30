#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees memory of a list
 * @head: pointer to head of singly linked list
 * Return: No Return
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
	return;
if ((*head)->next != NULL)
	temp = (*head)->next;
else
{
free(*head);
*head = NULL;
}
if (*head)
{
free_listint2(&temp);
free(*head);
}
*head = NULL;
}
