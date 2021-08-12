//
//  linked_list.h
//  Module-C
//
//  Created by Shubhra Duggal on 12/08/21.
//

#ifndef linked_list_h
#define linked_list_h

#include <stdio.h>
#include <stdlib.h>

struct Node {
    
    /*
     * A linked list node consists of data and a pointer to the next node.
     */
    int data;
    struct Node* next;
};

struct Node* create_node(int data);
void display_linked_list(struct Node* head);
struct Node* insert_element_at_end(struct Node* head, int data);
struct Node* insert_element_at_head(struct Node* head, int data);
struct Node* insert_element_at_index(struct Node* head, int data);

struct Node* create_node(int data){
    struct Node* new_node = NULL;
    
    // Some malloc statement
    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node -> next = NULL;
    new_node -> data = data;
    
    return new_node;
}

void display_linked_list(struct Node* head){
    struct Node* node = head;
    
    while (node != NULL){
        printf("|\n%d\n", node -> data);
        node = node -> next;
    }
}

struct Node* insert_element_at_end(struct Node* head, int data){
    /*
     * Create a new node with the given data
     * Traverse the list till the node -> next is NULL
     * This would be the last element of the list
     * Point the last node -> next to the new node
     * Point the next of new node to NULL
     */
    
}

#endif /* linked_list_h */
