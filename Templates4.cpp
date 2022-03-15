#include <iostream>
/*
Function Templates:-  declare a template with two data type parameters T1 and T2. 
And replace the data types we mentioned in the function with them. And that’s it. 
Our function has become general for all sorts of data types.
*/

using namespace std;
template <class t1, class t2>
float average(t1 a , t2 b){
    float avg = (a+b)/2;
    return avg;
}

//*********Overloading of a function template***********
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    cout<<"average of two int is "<<average(5,3)<<endl;
    cout<<"average of two float is "<<average(5.5,3.0)<<endl;
    cout<<"average of one int and one float is "<<average(5,1.5)<<endl;

    func(4);  //Exact match takes the highest priority -> func of int a parameter will invoke
    return 0;
}