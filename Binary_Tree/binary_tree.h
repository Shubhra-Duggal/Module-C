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
struct tree_node* create_binary_tree(int *data_elems, int len);
struct tree_node* create_bst(int *data_elems, int len);
struct tree_node* insert_tree_node(struct tree_node* root, int data);
void display_tree_inorder(struct tree_node *root);
void delete_tree_node(struct tree_node* root);

/* ************************************************************************************** */

struct tree_node* create_tree_node(int data){
    struct tree_node* new_tree_node = (struct tree_node*)malloc(sizeof(struct tree_node));
    new_tree_node -> data = data;
    new_tree_node -> left = NULL;
    new_tree_node -> right = NULL;
    
    return new_tree_node;
}

struct tree_node* insert_binary_tree(struct tree_node *root, int data){
    if (root == NULL){
        root = create_tree_node(data);
        //printf("%d\n", root -> data);
        return root;
    }
    else{
        struct queue* tree_queue = create_queue(20);
        enqueue(tree_queue, root);
        
        while (!isEmpty(tree_queue)){
            struct tree_node* old_node = dequeue(tree_queue);
            
            if (old_node -> left != NULL)
                enqueue(tree_queue, old_node -> left);
            else{
                old_node -> left = create_tree_node(data);
                return root;
            }
            
            if (old_node -> right != NULL)
                enqueue(tree_queue, old_node -> left);
            else{
                old_node -> right = create_tree_node(data);
                return root;
            }
        }
    }
    return root;
}

struct tree_node* create_binary_tree(int *data_elems, int len){
    struct tree_node *root = NULL;
    
    for (int i = 0; i < len; i++){
        root = insert_binary_tree(root, *(data_elems + i));
    }
    
    return root;
}

void display_tree_inorder(struct tree_node *root){
    if (root != NULL){
        display_tree_inorder(root -> left);
        printf("%d \n", root -> data);
        display_tree_inorder(root -> right);
    }
}


#endif /* binary_tree_h */
