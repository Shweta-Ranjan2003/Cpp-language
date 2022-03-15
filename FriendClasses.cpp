#include <iostream>
/*
Friend functions are those functions that have the access to private members
of the class in which they are declared.
Friend classes are those classes that have permission to access private members
of the class in which they are declared. 
*/

using namespace std;
//forward declaration
class complex;

class calculator
{
public:
    int sumreal(complex, complex); // not (complex o1, complex o2); because we made forward declaration of class only
    int sumcomplex(complex, complex);
};

class complex
{
    int a, b;
    // Individually declaring functions as friends
    friend int calculator ::sumreal(complex o1, complex o2);    //make friend sumreal func of class calculator
    friend int calculator ::sumcomplex(complex o1, complex o2); //make friend complex func of class calculator
    // Alternative: Declaring the entire calculator class as friend
    // friend class calculator;
public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void printData()
    {
        cout << "the complex no. is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex t1, t2;
    t1.setData(5, 4);
    t1.printData();
    t2.setData(4, 5);
    t2.printData();

    calculator calc;
    int resultReal = calc.sumreal(t1, t2);
    cout << "the sum of real no. is " << resultReal << endl;
    int resultcomplex = calc.sumcomplex(t1, t2);
    cout << "the sum of complex no. is " << resultcomplex << "i" << endl;

    return 0;
}
