/*
*File: stackArray.c
*Author: Nguyen Phi Hung
*Date: 03/04/2023
*Description: define functions which were declarated in header file
*/

#include<stackArray.h>

/*
*Function: initStack
*Description: genertate new stack
*Input:
    stack: Pointer to a stack
*Output: None
*/
void initStack(Stack *stack)
{
    stack->top = -1;
}
/*
*Function: isEmpty
*Description: check if array is empty
*Input:
    stack: Pointer to a stack
*Output:
    true: if arr is empty
    false: if arr isn't empty
*/
bool isEmpty(Stack *stack)
{
    return stack->top == -1;
}
/*
*Function: isFull
*Description: check if array is full
*Input:
    stack: Pointer to a stack
*Output:
    true: if arr is full
    false: if arr isn't full
*/
bool isFull(Stack *stack)
{
    return stack->top == SIZE - 1 ;
}
/*
*Function: push
*Description: add element into last array
*Input:
    stack: Pointer to a stack
    value: element need to be added
*Output: None
*/
void push(Stack *stack, uint8_t value)
{
    if(isFull(stack))
    {
        printf("Stack is Full\n");

    }else{
        stack->data[++stack->top] = value;
    }
}
/*
*Function: pop
*Description: remove and return element
*Input:
    stack: Pointer to a stack
    value: element need to be removed
*Output:
    last element
*/
uint8_t pop(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack is Empty\n");
        return -1;
    }else{
        return stack->data[stack->top--];
    }
}
/*
*Function: display
*Description: display elements in stack
*Input:
    stack: Pointer to a stack
*Output:
    elements in stack
*/
void display(Stack stack)
{
    for(int i = 0; i <= stack.top ; i++)
    {
        printf("%d--", stack.data[i] );
    }
    printf("\n");
}
