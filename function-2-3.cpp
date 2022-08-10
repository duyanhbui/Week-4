#include <iostream>

bool is_array_palindrome(int integers[], int length){
    bool is_Palindrome = true;
    for(int i =0; i < length;i++){
        int front = 0+i;
        int back = (length-1)-i;

        if(front > back){
            return is_Palindrome;
        }else{
            if(integers[front] != integers[back]){
                is_Palindrome =false;
                return is_Palindrome;
            }
        }
    }
}

int sum_integers(int integers[], int length){
    int sum = 0;
    for(int i = 0; i < length;i++){
        sum += integers[i];
    }
    return sum;
}

int palindrome_sum(int integers[], int length){
    if(length < 1){
        return -1;
    }else{
        if (is_array_palindrome(integers,length)){
            return -2;
        }
        else{
            sum_integers(integers,length);
        }
    }
}


