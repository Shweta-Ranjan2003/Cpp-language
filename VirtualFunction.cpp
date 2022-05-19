#include <iostream>
/*
A member function in the base class which is declared using virtual keyword is called virtual functions. 
They can be redefined in the derived class. virtual functions are used to implement run-time polymorphism. 
*/

using namespace std;
class BaseClass{
    public:
        int var_base=1;
/*
we have used the “virtual” keyword with the “display” function of the base class to make is virtual 
function so when the display function is called by using the base class pointer the display function of 
the derived class will run because the base class pointer is pointing to the derived class object.
*/
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display(); //now this will run display function of derived class.
    obj_base.display(); //base
    obj_derived.display(); //derived
    base_class_pointer = &obj_base;
    base_class_pointer->display(); //base
    //If we remove virtual keyword from base class function then obj-derived.display() will run derived function.
    return 0;
}