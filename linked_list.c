#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}NODE;

NODE *create(int);
void display (NODE *);

int main() {
	int n;
	NODE *head = NULL;
	printf("How many elements you want to provide?\n");
	scanf("%d", &n);
	head = create(n);
	display(head);
	return 0;
}

NODE *create(int n) {
	NODE *head = NULL;
	NODE *temp = NULL;
	NODE *p = NULL;
	for(int i = 0; i < n; i++)
	{
		temp = (NODE*)malloc(sizeof(NODE));
		printf("Enter the value to be stored in node number %d: ", i+1);
		scanf("%d", &temp->data);
		temp->next = NULL;
		if(head == NULL)
		{
			head = temp;
		}
		else
		{
			p = head;
			while(p->next != NULL)
			{
				p = p->next;
			}
			p->next = temp;
		}
	}
	return head;
}

void display(NODE *head) {
	if(head ==NULL)
	{
		printf("There seem to be no elements in the list.");
	}
	else
	{
		NODE *p = head;
		while(p->next != NULL)
		{
			printf("%d->", p->data);
			p = p->next;
		}
		printf("%d", p->data);
	}
	
}
			
			
			
			
			
			
			
			
			
		
		
		
		
		
		
		
		
