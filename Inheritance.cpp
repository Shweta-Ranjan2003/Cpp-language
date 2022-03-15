#include <iostream>
/*
Reusability is a very important feature of OOPs
In C++ we can reuse a class and add additional features to it
The concept of reusability in C++ is supported using inheritance
The existing class is called a base class
The new class which is inherited from the base class is called a derived class
Forms of Inheritance in C++

Single Inheritance:- A derived class is inherited with only one base class.
Multiple Inheritance:- One derived class is inherited with more than one base class.
Hierarchical Inheritance:- Several derived classes are inherited from a single base class. 
Multilevel Inheritance:- One derived class is inherited from another derived class. 
Hybrid Inheritance:- Hybrid Inheritance is implemented by combining more than one type of inheritance.

 // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
*/

using namespace std;
class country
{
    public:
     int states;
     char capital;
     public:
     country(){}
     country(int n , char cap)
     {
         states = n;
         capital = cap;
     }
};
//Creating a india derived class from country base class.
class india : country  //by default its visibility mode is private so public members of country will be
                       // private member of derived class india.
{
     int year; //its a private member of derived class india.
     public:
     string continent; //public member of derived class india.
        
       india(int yr ,int n)
       {
           year = yr;
           states = n;
           capital = 'D';  //all these three are private members of class india
        //    continent = asia;
       }

       void printdata()
       {
           cout<<"year is "<<year<<" and states are "<<states<<" capital is "<<capital
           <<" and continent is "<<continent<<endl;
       }
};

int main()
{
    country a(30,'C');
    country b(40,'D');
    cout<<"states in a are "<<a.states<<" capital is "<<a.capital<<endl;
    cout<<"states in b are "<<b.states<<" capital is "<<b.capital<<endl;

    india first(1949 , 28);
    // first.states = 29;  we cannot access this because visibility mode is by default private so
    // states ,year,capital all are private data member although states and year are public member of country.
    first.continent = "asia";
    first.printdata();
    
    return 0;
}