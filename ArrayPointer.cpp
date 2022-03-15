#include <iostream>
/*
A pointer is a data type which holds the address of other data type. 
The “&” operator is called “address off" operator, and the "*” operator is called “value at” dereference operator.

An array is a collection of items which are of the similar type stored in contiguous memory locations.
*/

using namespace std;

int main()
{
    int a=5;
    int* b=&a;
    // Pointer to pointer:- the address of one Pointer to another pointer.
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address c is "<<&a<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    //array & pointer arithmetic  
    int marks[] = {2,4,6,8,10};
    int* p= marks; // the name of the array is an address of the first index of an array
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
    // adding i in array will increment you from current address position + i*sizeof(int)
    cout<<*(p++)<<endl; //2
    cout<<*p<<endl; //4
    cout<<*(++p)<<endl; //6
    cout<<*(p++)<<endl; //6
    cout<<*(++p)<<endl; //10

    return 0;
}