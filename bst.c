#include<stdio.h>
#include<stdlib.h>

typedef struct tree {
	int data;
	struct tree *left;
	struct tree *right;
}tree;

void insert(tree **bst, int value) {
	tree *temp = NULL;
	temp = (tree *)malloc(sizeof(tree));
	temp->data = value;
	temp->left = NULL;
	temp->right = NULL;
	if(bst == NULL)
	{
		*bst = temp;
	}
	else 
	{
		tree *p = NULL;
		p = *bst;
		while(1)
		{
			if(value <= p->data)
			{
				if(p->left == NULL)
				{
					p = temp;
					break;
				}
				else
				{
					p = p->left;
				}
			}
			else if(value > p->data)
			{
				if(p->right == NULL)
				{
					p = temp;
					break;
				}
				else
				{
					p = p->right;
				}
			}
		}
	}
}

void display(tree *bst) {
	tree *temp = NULL;
	temp = bst;
	if(temp == NULL)
	{
		printf("The tree is empty!");
	}
	else
	{
		printf("%d ", temp->data);
		print(bst)
	
}

	
int main() {
	tree *bst = NULL;
	insert(&bst, 8);
	display(bst);
	return 0;
}



