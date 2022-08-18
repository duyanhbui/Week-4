#include <iostream>

void copy_integers(int old_array[],int new_array[],int length);

int main(int argc,int **argv){
    int length = 3;
    int old_array[length] = {1,2,3};
    int new_array[length];

    copy_integers(old_array,new_array,length);
}