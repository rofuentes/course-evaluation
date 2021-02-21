#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 100

typedef struct {
    char item[SIZE];
    int top;
}OperatorStack;

// function for operator stack operations
void opr_push(OperatorStack *, char);
char opr_pop(OperatorStack *);

// push operation
void opr_push(OperatorStack *sp, char v){
    // checking overflow
    if (sp->top == SIZE-1){
        printf("Stack overflow, terminating program\n");
        exit(1);
    }
    //otherwise push
    sp->item[++sp->top] = v;
}
// pop operation
char opr_pop(OperatorStack *sp){
    if (sp->top == 0){
        printf("Stack underflow, terminating program\n");
        exit(1);
    }
    return sp->item[sp->top--];
}

int main(){
}
