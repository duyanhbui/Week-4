#include <iostream>

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(int argc, int** argv){
    int binaryNum[4] = {0,1,1,0};
    std :: cout << bin_to_int(binaryNum,4);
}