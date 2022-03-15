#include <iostream>
/*
Copy constructor:- A copy constructor is a type of constructor that creates a copy of another object. 
If we want one object to resemble another object we can use a copy constructor. 
If no copy constructor is written in the program compiler will supply its own copy constructor. 
*/

using namespace std;

class Number{
    int a,b;
    public:
        Number(){
            a = 0; 
            b = 0; 
        }

        Number(int num, int n){
            a = num;
            b = n;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
            b = obj.b; //if we dont assign value then it will print garbage value
        }

        void display(){
            cout<<"The number for this object is "<< a<<" and "<<b <<endl;
        }
};
int main()
{
    Number x, y, z(45,56), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    //z2 = z; // Copy constructor not called because constructor is invoked at the time of object is created
              //and z2 object was already created before calling for copy constructor.
    //z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    return 0;
}