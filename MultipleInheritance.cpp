#include <iostream>
/*
Multiple inheritances are a type of inheritance in which one derived class is inherited 
with more than one base class.
// class Derived: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "Derived"
// };

*/

using namespace std;
class base1{
     protected:
     int base1int;
     public:
     void setbase1int(int a)
     {
         base1int = a;
     }
};
class base2{
     protected:
     int base2int;
     public:
     void setbase2int(int a)
     {
         base2int = a;
     }
};
class multipleInheritance : public base1 , public base2
{
       public:
       static int a;
       void display()
       {
           cout<<" for "<<a<<" time run"<<endl;
           cout<<"value of base1int is "<<base1int<<endl;
           cout<<"value of base2int is "<<base2int<<endl;
           cout<<"value after adding is "<<base1int+base2int<<endl;
           a++;
       }
};
int multipleInheritance :: a=1;

int main()
{
    multipleInheritance obj1,obj2,obj3;
    obj1.setbase1int(50);
    obj1.setbase2int(30);
    obj1.display();

    obj2.a=5;
    obj2.setbase1int(40);
    obj2.setbase2int(40);
    obj2.display();


    obj3.setbase1int(70);
    obj3.setbase2int(70);
    obj3.display();

    
    return 0;
}