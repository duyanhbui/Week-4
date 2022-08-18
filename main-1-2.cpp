#include <iostream>

int main()
{
    int *ptr, a[10]={1,2,3,4,5,6,7,8,9,10};
    int *b = new int[10];
    /* address of a[0] is assigned to ptr */
    ptr = &a[0];   
    // I want to copy the values in a into b; since i've declared b
        // as a dynamically allocated array,
    // I can now do pointer magic!!
    b = ptr;
    std :: cout << "Value of first element in b " << b[0] << std :: endl; 
    std :: cout << "Value of second element in b " << b[1] << std ::endl; 
    a[1] = 42;
    std :: cout << "Value of second element in b " << b[1] << std :: endl;

    /*Explaination: b is create as a pointer variable that point to int array in heap
    , then ptr is pointer variable that later assign with address of a[0]. Then b =ptr, 
    which b point to address of a[0] so when value in a[] change b just pointer variable point to a[],
    it doesn's mean that b is copy of a*/
return 0;
}