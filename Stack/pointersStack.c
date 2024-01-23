#include <stdio.h>
#include <stdlib.h>

struct stack
{
   int data;
   struct stack *ptr; //pointer type of stack
};

typedef struct stack Stack;
typedef Stack *stackPtr;


void push(stackPtr *top, int e)
{
    stackPtr node;

    node = malloc(sizeof(Stack)); // allocating memory

    if(node != NULL) {
        node->data = e;
        node->ptr = *top;
        *top = node;
    }
    else {
        printf("\nStack is Full\n");
    }
}

int pop(stackPtr *top)
{
    int poppedValue;

    stackPtr r;

    r = *top;
    poppedValue = r->data;
    *top = (*top)->ptr;
    free(r);

    return poppedValue;
}

int main()
{
    stackPtr stackNewPtr = NULL;

    push(&stackNewPtr, 75);

    int c = pop(&stackNewPtr);

    printf("%d\n", c);

    return 0;
}
