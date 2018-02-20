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
    printf("\n");
}
