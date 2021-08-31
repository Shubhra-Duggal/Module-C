//
//  binary_tree.h
//  Module-C
//
//  Created by Shubhra Duggal on 12/08/21.
//

#ifndef binary_tree_h
#define binary_tree_h

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*
 * Implementation of the binary tree will be similar to linked list
 * Nodes would be constructed and linked to each other on the basis of certain rules
 */



struct tree_node* create_tree_node(int data);
struct tree_node* create_tree(int *data_elems, int len); //Define rules?
void insert_tree_node(struct tree_node* root, int data);
void display_tree(struct tree_node *root);
void delete_tree_node(struct tree_node* root);

/* ************************************************************************************** */

struct tree_node* create_tree_node(int data){
    struct tree_node* new_tree_node = NULL;
    
    new_tree_node = (struct tree_node*)malloc(sizeof(struct tree_node));
    new_tree_node -> data = data;
    new_tree_node -> left = NULL;
    new_tree_node -> right = NULL;
    
    return new_tree_node;
}

struct tree_node* create_tree(int *data_elems, int len){
/*
    //Create a root node
    struct tree_node *root = (struct tree_node*)malloc(sizeof(struct tree_node));
    root -> data = *(data_elems);
    
    struct tree_node *left_node = create_tree_node(*(data_elems+1));
    root -> left = left_node;
    
    struct tree_node *right_node = create_tree_node(*(data_elems+2));
    root -> right = right_node;
    
    display_tree(root);
*/
    if (len == 0)
        return NULL;
    
    struct tree_node *root = create_tree_node(*(data_elems));
    struct tree_node *node = root;
    
    struct queue *tree_queue = create_queue(20);
    enqueue(tree_queue, node);
    
    int i = 1;
    while (i != len){
        display_queue(tree_queue);
        struct tree_node *old_node = dequeue(tree_queue);
        struct tree_node *new_node = create_tree_node(*(data_elems + i));
        printf("%d\n", root -> data);
        
        
        if (old_node -> left == NULL){
            old_node -> left = new_node;
            printf("%d\n", old_node -> left -> data);
            enqueue(tree_queue, old_node);
            enqueue(tree_queue, old_node -> left);
        }
        else if (old_node -> right == NULL){
            old_node -> right = new_node;
            printf("%d I am here 2\n", root -> right -> data);
            enqueue(tree_queue, old_node -> right);
        }
        else {
            enqueue(tree_queue, old_node -> left);
            enqueue(tree_queue, old_node -> right);
        }
        i++;

        //struct tree_node new_node = create_tree_node(*(data_elems+i));
    }
    
    display_tree(root);
    
    return root;
    
/*
    //How to create a binary tree
    
    //A queue of capacity of 20 nodes is created
    struct queue* tree_queue = create_queue(20);
    tree_node *node = root;
    
    //Traverse a binary tree as BFS. Find NULL and add element
    while (node != NULL){
        
        }
    
    while (count != len+1){
        tree_node *new_node = (tree_node *)malloc(sizeof(tree_node));
        new_node -> data = *(data_elems + count);
        if (node->left = NULL)
            node->left = new_node;
        else if (node->right = NULL)
            node->right = new_node;
        else
            
        }
            
    }
*/
}

void display_tree(struct tree_node *root){
    
    struct tree_node *node = root;
    
    struct queue *tree_queue = create_queue(20);
    enqueue(tree_queue, node);
    printf("%d\n", root -> data);
    if (root -> left == NULL)
        printf("WTF\n");

    while (!isEmpty(tree_queue)){
        struct tree_node *old_node = dequeue(tree_queue);
        if (old_node -> left != NULL){
            printf("%d\n", old_node -> left -> data);
            enqueue(tree_queue, old_node -> left);
        }
        else if (old_node -> right != NULL){
            printf("%d\n", old_node -> right -> data);
            enqueue(tree_queue, old_node -> right);
        }
    }
    // Do a breadth first search and then display the nodes at each depth. Maybe?
}



/*
void insert_tree_node(struct Tree_Node* root, data){
    struct Tree_Node* new_node = create_tree_node(data);
    struct Tree_Node* tracker_pointer == root;
    //How to add??
    // Do a breadth first search and add when encounter a NULL value.
    if (root == NULL) {
        root = CreateNode(data);
        return root;
    }
 
    // Else, do level order traversal until we find an empty
    // place, i.e. either left child or right child of some
    // node is pointing to NULL.
    queue<Node*> q;
    q.push(root);
 
    while (!q.empty()){
        Node* temp = q.front();
        q.pop();
 
        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = CreateNode(data);
            return root;
        }
 
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = CreateNode(data);
            return root;
        }
    }

}
*/


#endif /* binary_tree_h */
