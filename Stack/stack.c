//
//  stack.c
//  Module-C
//
//  Created by Shubhra Duggal on 12/08/21.
//

#include "stack.h"

int main(){
    
    struct stack* base;
    base = create_stack(4);
    
    display_stack(base);
    return 0;
}
