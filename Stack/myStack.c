#include <stdio.h>

#define STACK_MAX 100

typedef struct {
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item)
{

    // checking the space in stack
    if(s->top < STACK_MAX) {
        s->data[s->top] = item; // pushing the item into the stack
        s->top++; // shifting the top 1position
    }
    else {
        printf("\nStack is Full\n");
    }
}

int pop(Stack *s)
{
    int data;

    // checking the emptiness of the stack
    if(s->top == 0) {
        printf("\nStack is Empty\n");
        return -1;
    }
    else  {
        s->top = s->top - 1;
        data = s->data[s->top];
    }

    return data;
}

int main()
{
    int element;
    Stack myStack;

    myStack.top = 0;

    // storing the element into the stack
    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);
    push(&myStack, 4);

    // popping out the elements form the Stack

    element = pop(&myStack);
    printf("%d\n", element);

    element = pop(&myStack);
    printf("%d\n", element);

    element = pop(&myStack);
    printf("%d\n", element);

    element = pop(&myStack);
    printf("%d\n", element);

    element = pop(&myStack);
    printf("%d\n", element);

    return 0;
}
