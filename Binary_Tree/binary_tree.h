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
struct tree_node* create_tree(int *data_elems, int len, struct tree_node *new_node, int num);
void insert_tree_node(struct tree_node* root, int data);
void display_tree_inorder(struct tree_node *root);
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

struct tree_node* create_tree(int *data_elems, int len, struct tree_node *new_node, int num){
    if (num < len){
        new_node = create_tree_node(*(data_elems + num));
        
        new_node -> left = create_tree(data_elems, len, new_node -> left, 2*num + 1);
        new_node -> right = create_tree(data_elems, len, new_node -> right, 2*num + 2);
    }
    
    return new_node;
}

void display_tree_inorder(struct tree_node *root){
    if (root != NULL){
        display_tree_inorder(root -> left);
        printf("%d \n", root -> data);
        display_tree_inorder(root -> right);
    }
}


#endif /* binary_tree_h */
