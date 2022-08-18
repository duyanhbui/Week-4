#include <iostream>

extern int max_sub_sum(int *nums,int length) ;

int main(int argc,int **argv){
    int length = 10;
    int array[length] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };
    int *nums = &array[0];

    max_sub_sum(nums,length);
}