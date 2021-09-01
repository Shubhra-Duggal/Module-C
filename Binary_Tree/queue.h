//
//  tes.h
//  Module-C
//
//  Created by Shubhra Duggal on 01/09/21.
//

#ifndef test_h
#define test_h

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct tree_node{
    int data;
    struct tree_node* left;
    struct tree_node* right;
};

struct queue {
    int front, rear, size;
    unsigned capacity;
    struct tree_node* array[100];
};

struct queue* create_queue(unsigned capacity);
int isFull(struct queue* queue);
int isEmpty(struct queue* queue);
void enqueue(struct queue* queue, struct tree_node *item);
struct tree_node *dequeue(struct queue* queue);
int front(struct queue* queue);
int rear(struct queue* queue);
void display_queue(struct queue* queue);

/* ************************************************************************************** */

struct queue* create_queue(unsigned capacity){
    struct queue* queue = (struct queue*)malloc(sizeof(struct queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
      
    queue->rear = capacity - 1;
    
    //queue->array = (struct tree_node*)malloc(queue->capacity * sizeof(struct tree_node*));
    
    return queue;
}



int isFull(struct queue* queue){
    return (queue->size == queue->capacity);
}


int isEmpty(struct queue* queue){
    return (queue->size == 0);
}


void enqueue(struct queue* queue, struct tree_node *item){
    if (isFull(queue))
        return;
    
    queue->rear = (queue->rear + 1) % queue->capacity;
    
    // item is stored at the position pointed by the &array + rear
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}

struct tree_node *dequeue(struct queue* queue){
    if (isEmpty(queue))
        return NULL;
    
    // Return the element at the position front from the &array
    struct tree_node *item = queue->array[queue->front];
    
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    
    return item;
}


int front(struct queue* queue){
  if (isEmpty(queue))
      return INT_MIN;
  return queue->array[queue->front] -> data;
}

int rear(struct queue* queue){
  if (isEmpty(queue))
      return INT_MIN;
  return queue->array[queue->rear] -> data;
}

void display_queue(struct queue* queue){
    printf("<--");
    
    int n = queue -> size;
    
    for (int i = 0; i < n; i++){
        printf("| %d |", (queue -> array[(i + queue -> front) % queue -> capacity]) -> data);
    }
    
    printf("<--\n");
}

#endif /* test_h */
