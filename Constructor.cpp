#include <iostream>
/*
A constructor is a special member function with the same name as the class.
The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class.
Constructors are automatically invoked whenever an object is created.
Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address
*/

using namespace std;
class complex
{
    int a,b;
   public:
      complex(void); //constructor declaration
      complex(int , int); //constructor overloading --> according to the argument passed to the constuctor
                         // compiler will automatically decide which constructor will run.
    //    complex(){
    //     a = 0;
    //     b =0;
    // }         this will throw error because then there will be two constuctor taking same parameters.

      void printdata()
      {
          cout<<"the complex no. is "<<a<<" + "<<b<<"i"<<endl;
      }

};
complex :: complex(void) // This is a default constructor as it accepts no parameters
{
    a=10; //if we dont assign value to private members then they print garbage value.
    b=20;
}
complex :: complex( int x , int y) //Parameterized constructors (take one or more parameters). 
{
    a = x;
    b = y;
}

int main()
{   complex c1;
    c1.printdata();
      
      //explicit call
    complex c2 = complex(5,4);
    c2.printdata();

    //Implicit call
     complex c3(2,2);
    c3.printdata();

    
    return 0;
}
/*
Constructor overloading is a concept in which one class can have multiple constructors with different parameters.
The main thing to note here is that the constructors will run according to the arguments 
for example if a program consists of 3 constructors with 0, 1, and 2 arguments, so if we pass 1 argument 
to the constructor the compiler will automatically run the constructor which is taking 1 argument.
*/
/*
class Simple{
    int data1;
    int data2;
    public:
        Simple(int a, int b=9){  //Default arguments of the constructor are those which are provided in the 
                                 //constructor declaration. If the values are not provided when
                                 // calling the constructor uses the default arguments automatically. 
            data1 = a;
            data2 = b;
        }
 void printData();
};

void Simple :: printData(){
    cout<<"The value of data1 and data2 is "<<data1<<"and "<< data2<<endl;
}
int main(){
    Simple s(12, 13);
    s.printData();   //it will print 12 and 13
    Simple s2(12);
    s2.printData();   //it will print 12 and 9
    return 0;
}
*/