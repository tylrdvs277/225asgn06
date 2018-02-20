/*
 * Name: Tyler Davis
 * 
 * Implementations of functions in stack.h
 * Used to manipulate the stack from main
 *
 * Variables    stack:      This an array to be used
 *                          as a stack of ten items.
 *                          Array is length 11 because
 *                          stack[0] is the top when
 *                          the stack is empty
 *              stackPtr:   This is a pointer that points
 *                          to the element on top of the
 *                          stack. Points at stack[0] when
 *                          the stack is empty and stack[10]
 *                          when full.
 */

#include "stack.h"
#include <stdio.h>

int stack[11];
int *stackPtr = stack;

int push(int value) {
    if(stackPtr + 1 > &stack[10]) {
        return 1;
    }
    stackPtr++;
    *stackPtr = value;
    return 0;
}

int pop(int *value) {
    if(stackPtr == stack) {
        return 1;
    }
    *value = *stackPtr;
    stackPtr--;
    return 0;
}

void printStack(int format) {
    int *stackIter = &stack[1];
    while(stackIter <= stackPtr) {
        switch(format) {
            case 0:
                printf(" %d", *stackIter);
                break;
            case 1:
                printf(" %x", *stackIter);
                break;
            case 2:
                printf(" %c", *stackIter);
                break;
        }
        stackIter++;
    }
}
