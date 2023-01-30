#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of a linked list
 * @h: The head of the linked list
 * Return: The number of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
int size = o;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
size++;
}
return (size);
}
