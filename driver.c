/*
 * Name: Tyler Davis
 *
 * driver for the stack manipulation program
 * uses the functions defined in stack.h to
 * manipulate the stack.
 */

#include <stdio.h>
#include "stack.h"

int main(int argc, char *argv[]) {   
    char response;
    int printMode = 0;
    int pushNum, popNum, error;
    printf("Welcome to the stack program.\n\n");
    while(1) {
        printf("Enter option: ");
        scanf(" %c", &response);
        if(response == 'u') {
            printf("What number? ");
            scanf(" %d", &pushNum);
            error = push(pushNum);
            if(error == 1) 
                printf("Overflow!!!\n");
        } else if(response == 'o') {
            error = pop(&popNum);
            if(error == 1)
                printf("Underflow!!!\n");
            else
                printf("Popped %d\n", popNum);
        } else if(response == 'd') {
            printMode = 0;
        } else if(response == 'h') {
            printMode = 1;
        } else if(response == 'c') {
            printMode = 2;
        } else if(response == 'x') {
            printf("Goodbye!\n");
            return 0;
        } else {
            printf("\n\n");
            continue;
        }
        printf("Stack:");
        printStack(printMode);
        printf("\n\n");
    }
}
