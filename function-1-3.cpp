#include <iostream>

void copy_integers(int old_array[],int new_array[],int length){
    int *old_pointer = &old_array[0];
    int *new_pointer = &new_array[0];
    for(int i =0;i < length; i++){
        *(new_pointer+i) = *(old_pointer+i);
    }
}