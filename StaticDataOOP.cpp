#include <iostream>
/*
Static data member:-When a static data member is created, there is only a single copy 
of the data member which is shared between all the objects of the class.
Static functions:- They are independent of any object and class. Static function
can only access static data members and static function. Static function can only be accessed
using the scope resolution operator.  ( class_name::function_name; )
*/

using namespace std;

class Employee
{
    int id;
    static int count; //Declaration 
                      //you cannot initialize it any value here if you want to assign it a value then
                      // out of the class you can assign value to it.

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // throws an error because static meathods can only access
        //static data members and static methods.
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count=1000; // Definition  , its Default value is 0

int main()
{
    // Employee harry, rohan, lovish;
    Employee list[3];
    for (int i = 0; i < 3; i++)
    {
        list[i].setData();
        list[i].getData();
    }
    Employee::getCount();
   
    // harry.setData();
    // harry.getData();
    // Employee::getCount(); //Static methods can only be accessed using the scope resolution operator.

    // rohan.setData();
    // rohan.getData();
    // Employee::getCount(); //Static methods can only be accessed using the scope resolution operator.

    // lovish.setData();
    // lovish.getData();
    // Employee::getCount(); //Static methods can only be accessed using the scope resolution operator.

    return 0;
}