#include<iostream>
/*
Pointer to object :- eg- assume A is a class then A obj1 ; A *ptr; ptr=&obj1;//pointer to object
                     (*ptr).memberfunction(); or ptr->memberfunction();
Pointer to members:- take address of a member of a class and assign it to a pointer
                   A class member pointer can be declared using the operator ::* with the class name.
                   eg:- int A ::* ip = &A ::m;
                   ip pointer created thus acts like a class member in that it must be invoked with a class object.
                   A::* means "pointer to member" of class A
                   &A::m means the "address of the m member of A class"
                   ip now be used to access the member m inside member functions.
The dereference operator ->* is used to access a member when we use pointers to both the object and the member.
The dereference operator .* is used when object itself is used with the member pointer.

Every object in C++ has access to its own address through an important pointer called this pointer.
The “this” is a keyword that is an implicit pointer.
The this pointer is an implicit parameter to all member function . Therefore, inside a member function , this
may be used to refer to the invoking object.
Friend function do not have a this pointer , because friends are not members of a class . only member functions
have a this pointer 
“this” pointer points to the object which calls the member function.
A static member function does not have a this pointer.
We cannot declare this pointer or make assignment to it.
*/
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;  // (*this).a=a; here 'this' is a pointer object of this class which we are using 
                //to invoke a. Here we used a as the parameter and a is also the name of data member so we
                // have to used this keyword because priority is given to local var which is a(of parameter)
                //in this case to it will show garbage value.
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
//    Or
class B{
    int a;
    public:
         B setData(int a){ //or B & setData(int a){
            this->a = a;
            return *this; //this means pointer to the object, so *this is an object. 
            //So you are returning an object ie, *this returns a reference to the object. 
        }

        void getData(){
            cout<<"The value of b is "<<a<<endl;
        }
};

int main(){
    //This is a keyword which is a pointer which points to the object which invokes the member function.
    A obj;
    obj.setData(4);
    obj.getData();

    B b;
    b.setData(8).getData(); //We can use it like this because setdata function is returning 
    //a pointer which points to object b
    //so we can use that returned object with dot operator to invoke another member function.
    b.getData();
    return 0;
}
/*
class myclass {
public:
   // Return by pointer needs const and non-const versions
         myclass* ReturnPointerToCurrentObject()       { return this; }
   const myclass* ReturnPointerToCurrentObject() const { return this; }

   // Return by reference needs const and non-const versions
         myclass& ReturnReferenceToCurrentObject()       { return *this; } // return reference to the class
   const myclass& ReturnReferenceToCurrentObject() const { return *this; }

   // Return by value only needs one version.
   myclass ReturnCopyOfCurrentObject() const { return *this; }
};
*/