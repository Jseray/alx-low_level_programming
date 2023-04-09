#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *new9;
listint_t *tem = *head;

new9 = malloc(sizeof(listint_t));
if (!new9 || !head)
return (NULL);

new9->n = n;
new9->next = NULL;

if (idx == 0)
{
new9->next = *head;
*head = new9;
return (new9);
}

for (j = 0; tem && j < idx; j++)
{
if (j == idx - 1)
{
new9->next = tem->next;
tem->next = new9;
return (new9);
}
else
tem = tem->next;
}

return (NULL);
}
