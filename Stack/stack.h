//
//  stack.h
//  Module-C
//
//  Created by Shubhra Duggal on 12/08/21.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include <stdlib.h>

struct stack{
    int top;
    unsigned capacity;
    int *array;
};

struct stack* create_stack(int capacity);
void display_stack(struct stack* base);
int pop_stack(struct stack* base);
void push_stack(struct stack* base, int data);
int top(struct stack* base);
int is_empty(struct stack* base);

struct stack* create_stack(int capacity){
    struct stack* new_stack;
    
    new_stack = (struct stack*)malloc(sizeof(struct stack));
    new_stack -> top = -1;
    new_stack -> capacity = capacity;
    new_stack -> array = (int *)malloc(capacity * sizeof(int));
    
    return new_stack;
    
}

int is_full(struct stack* base){
    if (base -> top == (base -> capacity) - 1 )
        return 1;
    return 0;
}

int is_empty(struct stack* base){
    if (base -> top == -1 )
        return 1;
    return 0;
}

void display_stack(struct stack* base){
    int n = base -> capacity;
    for (int i = 0; i< n; i++){
        printf("| %d |\n ", base -> array[i]);
        printf("_\n");
    }
    
}

void push_stack(struct stack* base, int data){
    
    if (is_full(base)){
        printf("Stack Overflow!");
    }
    
    else{
        base -> top = base -> top + 1;
        base -> array[base -> top] = data;
    }
    
}

int pop_stack(struct stack* base){
    int element = -1;
    
    if (is_empty(base)){
        printf("Stack Underflow!");
    }
    else{
        element = base -> array[base -> top];
    }
    
    return element;
}


#endif /* stack_h */
