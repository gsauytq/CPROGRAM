#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node* next;
};

struct node* add_to_list(struct node* list, int n)
{
	struct node* new_node;

	new_node = malloc(sizeof(struct node));
	if (new_node == NULL)
	{
		printf("Error: malloc failed in add_to list\n");
		exit(EXIT_FAILURE);
	}
	new_node->value = n;
	new_node->next = list;

	return new_node;
}

struct node* search_list(struct node* list, int n)
{
	while (list->next != NULL && list->value != n)
		list = list->next;
	return list;
}

struct node* delete_from_list(struct node* list, int n)
{
	struct node* cur, * prev;

	for (cur = list, prev = NULL; cur != NULL, cur->value != n; cur = cur->next, prev = cur)
		;

	if (cur == NULL)
		return list;
	if (prev == NULL)
		list = list->next;
	else
		prev->next = cur->next;

	free(cur);
	return list;
}

int main(void)
{

}