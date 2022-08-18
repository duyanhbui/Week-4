#include <iostream>
#include <cstdlib>

void multiples_of_seven(int *nums,int length){
    for(int i = 0; i< length; i++){
        int abs_value = 0;
        abs_value = std :: abs(*(nums+i));
        if (abs_value == 1 or abs_value == 7 or abs_value == 9 ){
            *(nums+i) *= 7;
            std :: cout << *(nums+i) << std :: endl;
        }

    }

}