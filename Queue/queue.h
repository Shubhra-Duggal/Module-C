//
//  queue.h
//  Module-C
//
//  Created by Shubhra Duggal on 14/08/21.
//

#ifndef queue_h
#define queue_h

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
};

struct queue* createQueue(unsigned capacity);
int isFull(struct queue* queue);
int isEmpty(struct queue* queue);
void enqueue(struct queue* queue, int item);
int dequeue(struct queue* queue);
int front(struct queue* queue);
int rear(struct queue* queue);
void display_queue(struct queue* queue);

struct queue* create_queue(unsigned capacity){
    
    // Stores the specification of the queue- its address, front, rear etc.
    struct queue* queue = (struct queue*)malloc(sizeof(struct queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
      
    // When first element is enqueued, the rear will updated and point to the first position.
    queue->rear = capacity - 1;
    
    // Points to the memory space of sizeof(int)*capacity. This stores the elements.
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    
    return queue;
}



int isFull(struct queue* queue){
    return (queue->size == queue->capacity);
}


int isEmpty(struct queue* queue){
    return (queue->size == 0);
}


void enqueue(struct queue* queue, int item){
    if (isFull(queue))
        return;
    
    queue->rear = (queue->rear + 1) % queue->capacity;
    
    // item is stored at the position pointed by the &array + rear
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}

int dequeue(struct queue* queue){
    if (isEmpty(queue))
        return INT_MIN;
    
    // Return the element at the position front from the &array
    int item = queue->array[queue->front];
    
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    
    return item;
}


int front(struct queue* queue)
{
  if (isEmpty(queue))
      return INT_MIN;
  return queue->array[queue->front];
}

int rear(struct queue* queue)
{
  if (isEmpty(queue))
      return INT_MIN;
  return queue->array[queue->rear];
}

void display_queue(struct queue* queue){
    printf("<--");
    
    int n = queue -> size;
    
    for (int i = 0; i < n; i++){
        printf("| %d |", queue -> array[(i + queue -> front) % queue -> capacity]);
    }
    
    printf("<--\n");
}



  

#endif /* queue_h */
