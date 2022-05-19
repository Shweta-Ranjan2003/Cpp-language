#include <iostream>
/*
A destructor is a type of function which is called when the object is destroyed.
Destructor never takes an argument nor does it return any value.
*/

using namespace std;
int cnt=0;

class num{
    public:
        num(){
            cnt++;
            cout<<"This is the time when constructor is called for object number"<<cnt<<endl;
        }
        //destructor
        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<cnt<<endl;
            cnt--;
        }
};
using namespace std;

class Base
{
      public:
           Base()
           {
          cout<<"\n base class cons called";
          }
                   
 virtual ~ Base(){cout<<"\nBase Destructor Called";}
};
class Derived:public Base
{
      public:
             Derived()
             {
          cout<<"\n derived class contructor called"<<endl;
          }            
      ~Derived(){cout<<"\nDerived Destructor Called"<<endl;}
};

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    //after exiting this block get prints , destructor will be called for n3,n2 before printing below line
    //because destructor is called just after the use of that object is over.
    cout<<"Back to main"<<endl;
 

    //Virtual destructor
    Base *bptr=new Derived;
    //base class cons called
    //derived class cons called
    delete bptr;
    //derived class destr called
    //base class destr called
    //after this destructor for n1 will be called.
    return 0;
}