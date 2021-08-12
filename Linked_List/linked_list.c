//
//  linked_list.c
//  Module-C
//
//  Created by Shubhra Duggal on 12/08/21.
//

#include "linked_list.h"

int main(){
    //Create a linnked list head
    struct Node* head = NULL;
    head = create_node(20);
    display_linked_list(head);
    return 0;
}
