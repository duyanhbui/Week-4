#include <iostream>

extern void copy_doubles(double *old_array,double *new_array,int length);

int main(int argc,int **argv){
        int length = 3;
        double old_array[length] = {1.0,2.0,3.0};
        double new_array[length];

        double *old_pointer = old_array;
        double *new_pointer = new_array;

        copy_doubles(old_array,new_array,length);
}