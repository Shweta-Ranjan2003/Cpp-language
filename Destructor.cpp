#include <iostream>
/*
A destructor is a type of function which is called when the object is destroyed.
Destructor never takes an argument nor does it return any value.
*/

using namespace std;
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }
        //destructor
        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
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
    //after exiting this block get prints , destructor will be called for n2,n3 before printing below line
    //because destructor is called just after the use of that object is over.
    cout<<"Back to main"<<endl;
    //after this destructor for n1 will be called.
    return 0;
}