#include <stdio.h>
#include <stdlib.h>

struct linkedlist {
	int Data;
	struct linkedlist* Next;
};

struct linkedlist* creatlist(struct linkedlist* head, int n)
{//此处有毒，不易观看，小心中毒！细品   舒服 细品

	struct linkedlist* new_node;

	new_node = malloc(sizeof(struct linkedlist));

	new_node->Data = n;
	new_node->Next = head;

	return new_node;
}

struct linkedlist* creatlistone(struct linkedlist* head, int n)
{
	struct linkedlist* new_node;

	new_node = malloc(sizeof(struct linkedlist));

	new_node->Data = n;
	head->Next = new_node;

	return new_node;
}

struct linkedlist* searchlist(struct linkedlist* node, int n)
{
	while (node != NULL && node->Data != n)
	{
		node = node->Next;
	}

	return node;
}

struct linkedlist* deletelist(struct linkedlist* head, int n)
{
	struct linkedlist* cur, * prev;

	for (prev = NULL, cur = head; cur != NULL && cur->Data != n; prev = cur, cur = cur->Next)
		;

	if (cur == NULL)
	{
		printf("Not Find");
		return head;
	}
	if (prev == NULL)
	{
		head = head->Next;
	}
	else
	{
		prev->Next = cur->Next;
	}

	free(cur);

	return head;
}

struct linkedlist* insertlist(struct linkedlist* head, int n)
{
	struct linkedlist* prev, * cur, * node;
	prev = cur = node = malloc(sizeof(struct linkedlist));

	for (prev = NULL, cur = head; cur != NULL && n > cur->Data; prev = cur, cur = cur->Next)
		;

	if (prev == NULL)
	{
		node->Data = n;
		node->Next = head;
	}
	if (cur == NULL)
	{
		node->Data = n;
		prev->Next = node;
	}
	else
	{
		node->Data = n;
		prev->Next = node;
		node->Next = cur;
	}

	return head;
}

int main(void)
{
	int a[10], i;
	struct linkedlist* head = malloc(sizeof(struct linkedlist*)), * node = malloc(sizeof(struct linkedlist*));
	struct linkedlist* new=malloc(sizeof(struct linkedlist));

	for (i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	
	head->Data = a[0];
	node = creatlistone(head, a[1]);
	for (i = 2; i < 10; i++)
	{
		node = creatlistone(node, a[i]);
	}
	node->Next = NULL;
	new = head;

	while (head != NULL)
	{
		printf("->%d", head->Data);
		head = head->Next;
	}
	printf("\n");

	new = insertlist(new, 3);
	while (new != NULL)
	{
		printf("->%d", new->Data);
		new = new->Next;
	}

	return 0;
}

