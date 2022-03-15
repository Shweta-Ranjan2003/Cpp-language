#include <iostream>
/*
Single inheritance is a type of inheritance in which a derived class is inherited with only one base class.
*/
using namespace std;
class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2(); 
    int getdata4();//all these data member and member function will be inherited.
};

void Base ::setData(void)
{
    data1 = 10; //data 1 is not inheritable
    data2 = 20;
}

int Base::getData1()
{
    return data1; //but function member returning value of data 1 is inheritable
}

int Base::getData2()
{
    return data2;
}
class Derived : public Base
{ // Class is being derived publically
    int data3;
    int data4;
public:
    void process();
    void display();
};

void Derived ::process()
{
    // setdata();  if we would have maded derived class private then we would not be able to call setdata()
    // in main but we can call it here in member function of derived class
    data3 = data2 * getData1(); //we can't use data1 instead of using a function member of base class
                                //which is returning value of data1 because private members are not inheritable
}


void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl; //10
    cout << "Value of data 2 is " << data2 << endl;  //20
    cout << "Value of data 3 is " << data3 << endl; //200
}

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display(); 
    return 0;
}