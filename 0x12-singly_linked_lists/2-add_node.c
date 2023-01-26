#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the linked list.
 * @str: string to store in the list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
if (head != NULL && str != NULL)
{
temp = malloc(sizeof(list_t));
if (temp == NULL)
	return (NULL);
temp->str = strdup(str);
temp->len = _strlen(str);
temp->next = *head;
*head = temp;
return (temp);
}
return (0);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */
int _strlen(const char *s)
{
int c = 0;
while (*s)
{
s++;
c++;
}
return (c);
}
