#include <iostream>

void multiples_of_seven(int *nums,int length){
    for(int i = 0; i< length; i++){
        if (*(nums+i) == 1,*(nums+i) == 7,*(nums+i) == 9 ){
            *(nums+i) *= 7;
            std :: cout << *(nums+i) << std :: endl;
        }

    }

}