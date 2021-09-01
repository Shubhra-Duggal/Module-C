//
//  binary_tree.c
//  Module-C
//
//  Created by Shubhra Duggal on 12/08/21.
//

#include "binary_tree.h"

int main(){
    
    int array_input[] = {0, 1, 2, 3, 4, 5};
    struct tree_node *root = create_binary_tree(array_input, 6);
    //display_tree_inorder(root);
    printf("Height of tree is: %d", height_binary_tree(root));
    
    return 0;
}
