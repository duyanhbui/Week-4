#include <iostream>

extern int palindrome_sum(int integers[], int length);

int main(int argc, int** argv){
    int array[5] = {0,1,4,1,0};
    std :: cout<< palindrome_sum(array,5);
}