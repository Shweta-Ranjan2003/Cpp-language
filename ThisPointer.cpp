#include<iostream>
/*
“this” is a keyword that is an implicit pointer. 
“this” pointer points to the object which calls the member function.
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