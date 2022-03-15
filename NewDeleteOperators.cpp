#include<iostream>
using namespace std;
/*
Dynamically allocated memory is allocated on Heap and 
non-static and local variables get memory allocated on Stack 
operators new and delete performs the task of allocating and freeing the memory

New Operator:-  new operator initializes the memory and returns the address of the 
                newly allocated and initialized memory to the pointer variable. 
Syntax-> pointer-variable = new data-type; or  pointer-variable = new data-type(value);
Delete Operator:- 
 Syntax:  // Release memory pointed by pointer-variable
delete pointer-variable;  
*/
class complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){

    float *p = new float(40.78);
    cout << "The value at address p is " << *p << endl;
    delete p;
  
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    *(arr+2) = 30;  //name of array(arr) is itself a pointer to the address of first element of the array.
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << *(arr+1) << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    delete[] arr;

    // complex c;
    // complex *ptr = &c;     
    //        or
    complex *ptr = new complex;
    //  (*ptr).setData(24,42);   or
    ptr->setData(24,42); // -> arrow operator means dereference that pointer and access the members of class
                         // arrow operator -> is basically the combination of * and . operator.
    // (*ptr).getData();   or
    ptr->getData();
    
   
    return 0;
}
