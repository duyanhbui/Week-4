#include <iostream>

int bin_to_int(int binary_digits[], int number_of_digits){
    int steps = 1;
    int decimal = 0;
    for(int i = number_of_digits-1;i >= 0;i--){
        decimal += binary_digits[i]*steps;
        steps += steps;
    }
    return decimal;
}