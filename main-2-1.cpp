#include <iostream>

extern void multiples_of_seven(int *nums,int length) ;

int main(int argc,int **argv){
    int length = 3;
    int nums[3] = {1,2,3};
    int *ptr = &nums[0];
    multiples_of_seven(ptr,length);

    for (int i = 0; i < length; i++){
        std :: cout << *(ptr+ i) << std :: endl;
    }
}