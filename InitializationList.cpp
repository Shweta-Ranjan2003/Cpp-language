#include <iostream>
/*
The initialization list in constructors is another concept of initializing the data members of the class. 
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

*/

using namespace std;
class Test
{
    int a;
    int b;

public:
     //Test(int i, int j) : a(i), b(a + j) //4 and 10 
                                        //this will run okay because int a is declared first then int b.
    // Test(int i, int j) : a(i), b(i + j) //4 and 10 
     //Test(int i, int j) : b(j), a(i+b) //garbage value of a because int a was declared first in class Test.
     //Test(int i, int j) : b(i+j), a(j) //10 and 4
     //Test(int i, int j) : b(i), a(j) //6 and 4
     Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4,6);
    return 0;
}