#include <iostream>


extern void print_matrix(int array[10][10]);

int main(int argc, int** argv){
    int array[10][10] = {0};
    print_matrix(array);
}