#include <iostream>


int max_sub_sum(int *nums,int length){
    int max_so_far = -1000, max_ending_here = 0, start_seq = 0, end_seq = 0,reset_start_seq = 0;

    for(int i = 0; i < length; i++){
        max_ending_here += *(nums+i);
        if (max_ending_here > max_so_far){
            max_so_far = max_ending_here;
            
            /*Update start_seq, where max_ending_here reset; Update current position that lead to new max*/
            start_seq = reset_start_seq;
            end_seq = reset_start_seq;
        }

        /* When the sequence return any postive number*/
        if (max_ending_here < 0){
            max_ending_here = 0;
            
            /*Jump over the position that lead to < 0, reset_start_seq position,
            because if the seq is still positve it still can lead to higher max, once it negative,
            its not negate what come next*/

            reset_start_seq = i + 1;
        }
    }
    return max_so_far;

}