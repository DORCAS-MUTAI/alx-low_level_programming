#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list.
 * @head: a list that enters to the function.
 */
void free_list(list_t *head)
{
list_t *temp;

	while (temp != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}

