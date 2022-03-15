#include <iostream>
/*
“Poly” means several and “morphism” means form. So we can say that polymorphism is something that 
has several forms or we can say it as one name and multiple forms. There are two types of polymorphism:

Compile-time polymorphism
In compile-time polymorphism, it is already known which function will run. 
Compile-time polymorphism is also called early binding, which means that you are already bound to the 
function call and you know that this function is going to run. There are two types of compile-time polymorphism:

1. Function Overloading
2. Operator overloading

Run time polymorphism
the compiler doesn’t know already what will happen at run time. Run time polymorphism is also 
called late binding.The run time polymorphism is considered slow because function calls are decided 
at run time. Run time polymorphism can be achieved from the virtual function.

1. Virtual Function
*/

using namespace std;
class Base{
    public:
    int base_var;
    void display()
    {
        cout<<" the value of base class variable of base class is "<<base_var<<endl;
    }
};
class Derived : public Base{
    public:
    int derived_var;
    void display()  //same name display function in both class - polymorphism.
    {
        cout<<" the value of derived class variable of derived class is "<<derived_var<<endl;
    }
};

int main()
{
    Base* base_class_pointer_obj;
    Base object_base;
    Derived object_derived;
    base_class_pointer_obj = &object_derived; //Base class pointer pointing to derived class object.
    base_class_pointer_obj->base_var = 50; 
    //(*base_class_pointer_obj).base_var =50;
    base_class_pointer_obj->display();  //base class display function will be called because even 
                                      //though its pointing to derived class object but its a 
                                     //base class pointer(object)

    //Derived* derived_class_pointer_obj = &object_base; //error 
    
                                      
    return 0;
}