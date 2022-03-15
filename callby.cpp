#include<iostream>
/*
call by value:- copies of actual parameters are sent to the formal parameter,
 which means that if we change the values inside the function that will not affect the actual values.

call by reference:-the reference of actual parameters is sent to the formal parameter, 
which means that if we change the values inside the function that will affect the actual values.

call by pointer:- the address of actual parameters is sent to the formal parameter,
 which means that if we change the values inside the function that will affect the actual values. 
*/
using namespace std;

// This will not swap a and b because its a call by value meathod.
void swap(int a, int b){ 
    int temp = a;         
    a = b;               
    b = temp;            
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ 
    int temp = *a;             
    *a = *b;               
    *b = temp;             
}

// Call by reference using C++ reference Variables
 void swapReferenceVar(int &a, int &b){  //it basically means int &a=x and int &b=y; so if we change
                              //a or b then real value of x and y will also change as both are alias
     int temp = a;             
     a = b;               
     b = temp;            
 }

 int & swapReferenceVar2(int &a, int &b){ // it will return a reference to an int
    int temp = a;             
    a = b;               
    b = temp;             
    return a; 
}

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x, y); // This will not swap a and b because copies of x and y is sent to function.
    // x=4,y=5
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    swapPointer(&x, &y); //This will swap a and b using pointer reference
    //x=5,y=4
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
     swapReferenceVar(x, y); //This will swap a and b using reference variables
     //x=4,y=5
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    swapReferenceVar2(x, y) = 766;   //it will make x (a)=766 from 4 and y (b)=4 from 5
    //x=766 , y=4
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
