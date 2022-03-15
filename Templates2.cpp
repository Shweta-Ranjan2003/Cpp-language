#include <iostream>
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (seperated by comma)
template<class T1, class T2 , class T3>
class nameOfClass{
    //body
}
*/

using namespace std;
template <class S>
class salary{
    S amount;
    public:
    salary(S a)
    {
        amount = a; //now we will not have to create different classes for different data type salary.
    }
    S display();
};
template <class S>
S salary<S> :: display(){
        return amount;
    }
template <class Par1, class Par2>
class Address{
    Par1 initial;
    Par2 name;
    public:
    int *array;
    int size;
    Address(int a, Par2 b , Par1 c)
    {
        size=a;
        array = new int[a];
        name = b;
        initial = c;
    }
    void display(){
        for (int i = 0; i < size; i++)
        {
            cout<<array[i]; //or cout<<this->array[i];
        }
        cout<<endl<<"initial of person is "<<initial<<" and name is "<<name<<endl;
    }
};
int main()
{
    salary <float> shweta(90000.59);
    cout<<"the salary is :"<<shweta.display()<<endl; //90000.6 because it will round of the no.
    salary <int> amit(80000);
    cout<<"the salary is :"<<amit.display()<<endl;
    salary <char>abhi('M');
    cout<<"the salary is :"<<abhi.display()<<endl;
    salary <string> shubham("million");
    cout<<"the salary is :"<<shubham.display()<<endl;

    Address <char , string > Ashi(2 , "Ashi" , 'A'); //we have to write it in sequence
                                               // now Par1 will be char and Par2 will be string.
    Ashi.array[0]=7;
    Ashi.array[1]=9;
    Ashi.display();

    return 0;
}