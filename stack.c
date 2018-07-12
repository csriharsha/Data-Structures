#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
	int data[3];
	int top;
}stack;

void init(stack *s) {
	s->top = -1;
}
void push(stack *s, int value) {
	if(s->top == 2)
	{
		printf("Maximum push limit reached\n");
		return;
	}
	else
	{
		s->top++;
		s->data[s->top] = value;
		//printf("successfully pushed the value, %d at the index %d\n", s->data[s->top], s->top);
	}
}
void pop(stack *s) {
	int peak;
	if(s->top == -1)
	{
		printf("The current stack is empty. Cannot pop out\n");
	}
	else
	{
		peak = s->data[s->top];
		printf("popping element: %d out...done!\n", peak);
		s->top--;
	}
}
void display(stack *s) {
	if(s->top == -1)
	{
		printf("Sorry, there is no data to display\n");
		return;
	}
	else
	{
		for(int i = 0; i <= s->top; i++) 
		{
			printf("%d\n", s->data[i]);
		}
	}
}

int main() {
	stack s;
	init(&s);
	push(&s, 5);
	push(&s, 6);
	push(&s, 8);
	display(&s);
	pop(&s);
	display(&s);
	pop(&s);
	display(&s);
	return 0;
}
































