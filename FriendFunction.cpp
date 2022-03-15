#include <iostream>
/*
Friend functions are those functions that have the right to access the private data members of class 
even though they are not defined inside the class. It is necessary to write the prototype of the friend function.
One main thing to note here is that if we have written the prototype for the friend function in the class 
it will not make that function a member of the class.
Properties of Friend Function
Not in the scope of the class
Since it is not in the scope of the class, it cannot be called from the object of that class, 
for example, t1.dosum() is invalid
A friend function can be invoked without the help of any object
Usually contain objects as arguments
Can be declared under the public or private access modifier, it will not make any difference
It cannot access the members directly by their names, it needs (object_name.member_name) to access any member.
*/

using namespace std;
class complex
{
   int a,b;
   public:
   //// Below line means that non member funtion(dosum) is allowed to do anything with my private members.
   friend complex dosum(complex o1 , complex o2);
   void setdata(int x, int y)
   {
       a=x;
       b=y;
   }
   void printdata()
   {
       cout<<"the value of complex no. is "<<a<<" + "<<b<<"i"<<endl;

   }
};

 complex dosum(complex o1 , complex o2)
{
    complex o3;
    o3.setdata((o1.a+o2.a) , (o1.b+o2.b));  //object_name.member_name
     return o3;
}

int main()
{  complex t1,t2,sum;
t1.setdata(5,4);
t1.printdata();

t2.setdata(4,5);
t2.printdata();

sum = dosum(t1,t2);  //sum.dosum() is invalid
sum.printdata();
    
    return 0;
}