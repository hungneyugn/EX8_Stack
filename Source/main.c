/*
*File: main.c
*Author: Nguyen Phi Hung
*Date: 03/04/2023
*Description: methods of Stack
*/
#include<stackArray.h>
int main()
{
    Stack a;
    initStack(&a);
    push(&a, 1);
    push(&a, 7);
    push(&a, 9);
    push(&a, 8);
    push(&a, 15);
    display(a);
    return 0;
}