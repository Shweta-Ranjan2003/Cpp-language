#include <iostream>
/*
Templates are a feature of the C++ programming language that allows functions and classes to operate with 
generic types. This allows a function or class to work on many different data types without being rewritten 
for each one. Basically its a blueprint or formula for creating a generic class or a function.

Templates are parameterized classes. And it is used to follow DRY principle and Generic programming
Generic Programming:- It is called generic, because it is sufficient to declare a template once, 
it becomes general and it works all along for all the data types.

Syntax:- First, we declare a template of class and pass a variable T as its parameter.
Define the class of vector and keep the data type of *arr as T only. 
Now, the array becomes of the type we supply in the template.

template <class T>
class vector {
    T *arr;
    int size;
    public:
        vector(T* arr)[
            //code
        ]
        //and many other methods
    
};
 
int main() {
    vector<int> myVec1();
    vector<float> myVec2();
    return 0;
}
*/
using namespace std;
 /*
//Here we are making a vector class which will just give dotproduct of int data type but if we used template
//then just by defining this class one we could use it for different data types.
class vector
{
    public:
        int *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new int[size]; //dynamic memory allocation 
        }
    int dotProduct(vector &v){ //take a object of a vector class as a parameter and 
                              //'v' will be alias for it (vector &v=object_passed)
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i]; //object used to invoke this function's[i] value*object passed[i]
    //This is a keyword which is a pointer which points to the object which invokes the member function.
                                        
        }
        return d;
    }
};
 
int main()
{
    vector v1(3); //vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;  //5
    return 0;
}
*/

template <class T>
class vector
{
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vector<float> v1(3); //vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector<float> v2(3); //vector 2 with a float data type
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}

