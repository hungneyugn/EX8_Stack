/*
*File: stackArray.h
*Author: Nguyen Phi Hung
*Date: 03/04/2023
*Description: File header for demonstrating stack
*/
#ifndef __STACKARRAY_H
#define __STACKARRAY_H

#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

/*define size of array is 10*/
#define SIZE 10

/*Struct save data of a stack*/
typedef struct {
    uint8_t data[SIZE];
    int top;
} Stack;

/*Function genertate new stack*/
void initStack(Stack *stack);

/*Function check if array is empty*/
bool isEmpty(Stack *stack);

/*Function check if array is full*/
bool isFull(Stack *stack);

/*Function add element into last array*/
void push(Stack *stack, uint8_t value);

/*Function remove and return element*/
uint8_t pop(Stack *stack);

/*Function display elements in stack*/
void display(Stack stack);

#endif
