//
//  source.h
//  Module-C
//
//  Created by Shubhra Duggal on 12/08/21.
//

#ifndef source_h
#define source_h

#include <stdio.h>

// return a global pointer whenever you call a function from the header file
int *temp_pointer = NULL;

int length(int array[]);
int *insert_element(int element, int index, int array[]);
int *delete_element(int index, int array[]);
int *change_size_of_array(int array[], int new_size);
int *sort_array(int array[], int ascending);
int frequency_element(int array[], int len_, int element);


int frequency_element(int array[], int len_, int element){
    int count = 0;
    for ( int i = 0; i < len_; i++){
        if (array[i] == element)
            count ++;
    }
    return count;
}

#endif /* source_h */
