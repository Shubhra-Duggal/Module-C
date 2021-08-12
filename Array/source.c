//
//  source.c
//  Module-C
//
//  Created by Shubhra Duggal on 12/08/21.
//

#include "source.h"

int main(){
    int input_array[] = {1, 2, 3, 1, 4, 5, 6, 7, 1};
    int len_ = sizeof(input_array)/sizeof(int);
    printf("%d\n", frequency_element(input_array, len_, 1));
    return 0;
}
