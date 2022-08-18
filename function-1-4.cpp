#include <iostream>

void copy_doubles(double *old_array,double *new_array,int length){
    double *old_pointer = &old_array[0];
    double *new_pointer = &new_array[0];
    for(int i =0;i < length; i++){
        *(new_pointer+i) = *(old_pointer+i);
}