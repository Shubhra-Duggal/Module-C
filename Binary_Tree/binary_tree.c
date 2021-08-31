//
//  binary_tree.c
//  Module-C
//
//  Created by Shubhra Duggal on 12/08/21.
//

#include "binary_tree.h"

int main(){
    
    int array_input[] = {10, 20, 30};
    struct tree_node *root = create_tree(array_input, 3, root, 0);
    display_tree_inorder(root);
    
    return 0;
}
