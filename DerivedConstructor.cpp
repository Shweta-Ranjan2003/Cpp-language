#include <iostream>
using namespace std;
/*
Constructors in Derived Class in C++
We can use constructors in derived classes in C++
If the base class constructor does not have any arguments, there is no need for any constructor 
in the derived class
But if there are one or more arguments in the base class constructor, derived class need to have parameterized
constructor and pass argument to base class constructor 
to the base class constructor
//If both base and derived classes have constructors, base class constructor is executed first
//Order of execution of destructor will be reverse as the order of constructor

//In multiple inheritances, base classes are constructed in the order in which 
they appear in the class declaration.
And order of execution of destructor will be reverse.
//In multilevel inheritance, the constructors are executed in the order of inheritance. A->B->C->D
And destructor will be called D->C->B->A

C++ supports a special syntax for passing arguments to multiple base classes
The constructor of the derived class receives all the arguments at once and then will pass 
the call to the respective base classes
The body is called after the constructors is finished executing.
syntax:- 
Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
….
}

Special Case of Virtual Base Class

The constructors for virtual base classes are invoked before a non-virtual base class
If there are multiple virtual base classes, they are invoked in the order declared
Any non-virtual base class are then constructed before the derived class constructor is executed

Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};
*/

//                           *************Multiple Inheritance *****************
class base1{
     int data1;
     public:
      base1(int a){
          data1=a;
        cout<<"base1 constructor called "<<endl;
      }
      void printdata1(){
        cout<<" value of data1 of base1 is "<<data1<<endl;
      }
};
class base2{
    int data2;
    public:
    base2(int b){
        data2=b;
        cout<<"base2 constructor called"<<endl;
    }
    void printdata2(){
        cout<<" value of data2 of base2 is "<<data2<<endl;
    }
};
class derived: public base2 , public base1{    //constructor of base2 will be called first.
       int derived1 , derived2;
       public:
        derived(int a , int b , int c , int d ):base1(b),base2(d){
            derived1 = a;
            derived2 = c;
            cout<<" derived class constructor called "<<endl;
        }
            void printdata3(){
            cout<<" value of derived1 is "<<derived1<<endl
            <<" value of derived2 is "<<derived2<<endl;
        }
};

int main()
{
    derived object(1,2,3,4);
    object.printdata1();
    object.printdata2();
    object.printdata3();
    
    return 0;
}

/*
*******************Multilevel Inheritance****************************
class base1{
     int data1;
     public:
      base1(int a){
          data1=a;
        cout<<"base1 constructor called "<<endl;
      }
      void printdata1(){
        cout<<" value of data1 of base1 is "<<data1<<endl;
      }
};
class base2 : public base1{
    int data2;
    public:
    base2(int a , int b): base1(a){
        data2=b;
        cout<<"base2 constructor called"<<endl;
    }
    void printdata2(){
        cout<<" value of data2 of base2 is "<<data2<<endl;
    }
};
class derived: public base2 {  
       int derived1 , derived2;
       public:
        derived(int a , int b , int c , int d ) :base2(b,d){
            derived1 = a;
            derived2 = c;
            cout<<" derived class constructor called "<<endl;
        }
            void printdata3(){
            cout<<" value of derived1 is "<<derived1<<endl
            <<" value of derived2 is "<<derived2<<endl;
        }
};

int main()
{
    // contructor will be called in order of inheritance in multliple inheritance
    // base1 --> base2 --> derived
    derived object(1,2,3,4);
    object.printdata1();
    object.printdata2();
    object.printdata3();
    
    return 0;
}
*/
/*
  ***********************Virtual Base Class ******************************
class base1{
     int data1;
     public:
     //base1(){}  //it will be required if no constructor is passed for base1 in derived class constructor
                 
      base1(int a){
          data1=a;
        cout<<"base1 constructor called "<<endl;
      }
      void printdata1(){
        cout<<" value of data1 of base1 is "<<data1<<endl;
      }
};
class base2 : virtual public base1{
    int data2;
    public:
    base2(int a , int b): base1(a){
        data2=b;
        cout<<"base2 constructor called"<<endl;
    }
    void printdata2(){
        cout<<" value of data2 of base2 is "<<data2<<endl;
    }
};
class base3 : public virtual base1{
    int data3;
    public:
    base3(int a , int b): base1(a){
        data3=b;
        cout<<"base3 constructor called"<<endl;
    }
    void printdata3(){
        cout<<" value of data3 of base3 is "<<data3<<endl;
    }
};
class derived: public base3, public base2 {  
       int derived1 , derived2;
       public:
        derived(int a , int b , int c , int d , int e ) :base1(a) ,base2(a,b),base3(a,c){
            derived1 = d;
            derived2 = e;
            cout<<" derived class constructor called "<<endl;
        }
            void printdata4(){
            cout<<" value of derived1 is "<<derived1<<endl
            <<" value of derived2 is "<<derived2<<endl;
        }
};

int main()
{
    // contructor will be called in order
    // virtual class base1 --> base3 --> base2 --> derived
    // no matter what first argument i pass while calling base2 or base3 constructor
    // base1 constructor will set its value to the argument i passed for base1 separately
    // if i dont give base1 separate value in derived class constructor then garbage value will be assign
    derived object(1,2,3,4,5);
    object.printdata1();
    object.printdata2();
    object.printdata3();
    object.printdata4();
    
    return 0;
}
*/
