#include <iostream>
#include <math.h>
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility operationtion and performs +, -, *, / and displays the results using another operationtion.
    2. ScientificCalculator - Takes input of 2 numbers using a utility operationtion and performs any four scientific operations of your choice and displays the results using another operationtion.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
using namespace std;
class SimpleCalculator
{
    protected:
    int a, b;

public:
    int add(int x, int y)
    {
        a = x;
        b = y;
        return a + b;
    }
    int sub(int x, int y)
    {
        a = x;
        b = y;
        return a - b;
    }
    int multiply(int x, int y)
    {
        a = x;
        b = y;
        return a * b;
    }
    int divide(int x, int y)
    {
        a = x;
        b = y;
        return a / b;
    }
};
class ScientificCalculator{
    protected:
    int a,b;
    public:
    int power(int c , int d)
    {
        a = c;
        b = d;
        return pow(a,b);
    }
    int exponential(int x)
    { 
        a = x;
        return exp(a);
    }
    int trigonometry(int x , string operation)
    {
        a= x;
        if (operation == "sin")
        {
            return sin(a);
        }
        else if (operation == "cos")
        {
            return cos(a);
        }
        else if (operation == "tan")
        {
            return tan(a);
        }
    }
    int logarithmic(int x)
    {
        a =x;
        return log(a);
    }
    int logBase10(int x)
    {
        a = x;
        return log10(a);
    }
};
class HybridCalculator : public SimpleCalculator , public ScientificCalculator
{};
int main()
{
    // SimpleCalculator obj1;
    // ScientificCalculator obj1;
    HybridCalculator obj1;

    int a, b;
    cout << "enter two numbers below:" << endl;
    cin >> a;
    cin >> b;
    cout << "what operation you want to perform:" << endl;
    string operation;
    cin >> operation;
        if (operation == "add")
        {
        cout << obj1.add(a, b) << endl;
        }
        else if (operation == "subtract")
        {
        cout << obj1.sub(a, b) << endl;
        }
        else if (operation == "multiply")
        {
        cout << obj1.multiply(a, b) << endl;
        }
        else if (operation == "divide")
        {
        cout << obj1.divide(a, b) << endl;
        }
        else if (operation == "power")
        {
            cout<<obj1.power(a,b)<<endl;
        }
        else if (operation == "exp")
        {
            cout<<obj1.exponential(a)<<endl;
            cout<<obj1.exponential(b)<<endl;
        }
        
        else if (operation == "sin")
        {
             cout<<"sin of first number is "<<obj1.trigonometry(a,"sin")<<endl;
             cout<<"sin of second number is "<<obj1.trigonometry(b,"sin")<<endl;
        }
        else if (operation == "cos")
        {
             cout<<"cos of first number is "<<obj1.trigonometry(a,"cos")<<endl;
             cout<<"cos of second number is "<<obj1.trigonometry(b,"cos")<<endl;
        }
        else if (operation == "tan")
        {
             cout<<"tan of first number is"<<obj1.trigonometry(a,"tan")<<endl;
             cout<<"tan of second number is"<<obj1.trigonometry(b,"tan")<<endl;
        }
        else if (operation == "log")
        {
             cout<<"log of first number is "<<obj1.logarithmic(a)<<endl;
             cout<<"log of second number is "<<obj1.logarithmic(b)<<endl;
        }
        else if (operation == "logbase10")
        {
            cout<<"logbase10 of first number is "<<obj1.logBase10(a)<<endl;
            cout<<"logbase10 of second number is "<<obj1.logBase10(b)<<endl;
        }
        else
        {
        cout << "enter valid operator" << endl;
        }
    return 0;
}