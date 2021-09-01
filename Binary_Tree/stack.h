//
//  stack.h
//  Module-C
//
//  Created by Shubhra Duggal on 01/09/21.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include <stdlib.h>

struct stack{
    int top;
    unsigned capacity;
    struct tree_node *array[100];
};

struct stack* create_stack(int capacity);
void display_stack(struct stack* base);
struct tree_node* pop_stack(struct stack* base);
void push_stack(struct stack* base, struct tree_node* node);
int top(struct stack* base);
int is_empty(struct stack* base);

/* *************************************************************** */


struct stack* create_stack(int capacity){
    struct stack* new_stack;
    
    new_stack = (struct stack*)malloc(sizeof(struct stack));
    new_stack -> top = -1;
    new_stack -> capacity = capacity;
    
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
    for (int i = n - 1; i >= 0; i--){
        printf("| %d |\n ", base -> array[i] -> data);
        printf("_\n");
    }
    
}

void push_stack(struct stack* base, struct tree_node* node){
    
    if (is_full(base)){
        printf("Stack Overflow!");
    }
    
    else{
        base -> top = base -> top + 1;
        base -> array[base -> top] = node;
    }
    
}

struct tree_node* pop_stack(struct stack* base){
    struct tree_node* node;
    
    if (is_empty(base)){
        printf("Stack Underflow!");
    }
    else{
        node = base -> array[base -> top];
    }
    return node;
}


#endif /* stack_h */
