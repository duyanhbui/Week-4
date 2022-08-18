#include <iostream>
#include <string>

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(int argc,int **argv){
    std :: string first[3][2] = {{"0","1"}
                                ,{"2","3"}
                                ,{"4","5"}};
    std :: string second[3][2];
    string_2d_copy(first,second,3);
}