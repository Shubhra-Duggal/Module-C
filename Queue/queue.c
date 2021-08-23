//
//  queue.c
//  Module-C
//
//  Created by Shubhra Duggal on 14/08/21.
//

#include "queue.h"

int main(){
    struct queue* queue = create_queue(5);
    enqueue(queue, 0);
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    // enqueue(queue, 5);
    
    display_queue(queue);
    
    return 0;
}
