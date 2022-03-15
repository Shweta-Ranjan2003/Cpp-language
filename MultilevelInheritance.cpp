#include <iostream>
/*
Multilevel inheritance is a type of inheritance in which one derived class is inherited 
from another derived class.
If we inherit B from A and C from B : [A-->B-->C]
1. A is the base class for B and B is the base class for C.
2. A-->B-->C is called Inheritance path.
*/

using namespace std;
class exam
{
    protected:
    int roll_no;
    public:
    
    void set_rollno(int n);
};
void exam :: set_rollno(int n)
{
    roll_no = n;
}
class student : public exam{   //protected member roll_no is inherited as a protected member 
    public:
    int maths;
    int english;
    void set_marks(int a , int b)
    {
        maths = a;
        english = b;
    }
};
class result : public student{
     public:
     void display_result()
     {
         cout<<"for roll no. "<<roll_no<<" result is "<<(maths+english)/2<<" %"<<endl;
     }
};

int main()
{
     result shweta;
     shweta.set_rollno(69);  
     //if result and student was inheritated protected then protected and public both data member 
     //would have been inherited as protected and we could not have had access them like this.
     shweta.set_marks(99,99);
     shweta.display_result();
    
    
    
    return 0;
}