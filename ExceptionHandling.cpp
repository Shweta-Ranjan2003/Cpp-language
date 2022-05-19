/*
Exceptions are the run time anomalies or unusual
conditions that a program may encounter while
executing.
• Examples- division by zero, access to an array
outside of its bounds, running out of memory
space.
• Because exceptions are outside the normal
operation of a program, default action is to write
out an error message and terminate the offending
process.
             Types of exceptions
• Synchronous – Errors such as “out of range”
and “over-flow” are synchronous.
• Asynchronous – Errors that are caused by
events beyond the control of the program
(keyboard interrupts) are called asynchronous
exceptions.
– Exception handling in C++ is designed to handle
only synchronous exceptions.
                Exception handling mechanism
1• Find the problem (Hit the exception)
2• Inform that an error has occurred.(Throw an
exception)
3• Receive the error information. (catch the exception)
• Take corrective actions. (Handle the exception)

//try block- A block of statements which may generate
exceptions.
• When an exception is detected, it is thrown using a
throw statement in the try block.
• A catch block defined by the keyword catch ‘catches’
the exception ‘thrown’ by the throw statement in the
try block and handles it appropriately.
NOTE:
 The catch block that catches an exception must
immediately follow the try block that throws the
exception.

Catch all exceptions:-we may not be able to predict all
possible types of exceptions so we can force a catch statement to
catch all exceptions instead of a certain type alone.
 catch(…)
 {
 // Statements for processing
 // all exceptions
 }
                  Rethrowing an exception
• Rethrowing causes the current exception to be
thrown to the next enclosing try/catch
sequence and is caught by a catch statement
listed after that enclosing try block.
• In such situations, we may invoke throw
without any arguments as:
 throw;
*/
#include <iostream>
using namespace std;
void divide(int x, int y, int z)
{
    cout << "We are inside the function" << endl;
    if ((x - y) != 0)
    {
        int R = z / (x - y);
        cout << "Result=" << R << endl;
    }
    else
    {
        throw(x - y);
    }
}
void test(int x)
{
    char msg[] = "hello";
    try
    {
        if (x == 1)
            throw x; // 1
        else if (x == -1)
            throw 1.0;
        else if (x == 0)
            throw msg;
         cout << "\n no exception occurred"<<endl;
    }

    catch (int m)
    {
        cout << "\n caught an integer exception"<<endl;
    }
    catch (double p)
    {
        cout << "\n caught double excpt"<<endl;
    }
    catch (char z)
    {
        cout << "\n caught char excp"<<endl;
    }
    catch (char m1[10])
    {
        cout << "\n handle char types of exceptions"<<endl;
    }
}
void divide(double x, double y)
 {
 cout<<" Inside function"<<endl;
 try
 {
 if(y==0.0)
 throw y; //Throwing double
 else
 cout<<" Division= "  << x/y<<endl;
 }
 catch( double) // Catch a double
 {
 cout<<" caught double inside function"<<endl;
 throw; // Rethrowing double
 }
cout<<" end of function"<<endl;
} 
int main()
{
    int a, b, res;
    cout << "enter a: " << endl;
    cin >> a;
    cout << "enter b: " << endl;
    cin >> b;
    try
    {
        if (b != 0)
        {
            res = a / b;
            cout << "result: " << res << endl;
        }
        else
            throw b; // throw expression (that expression can constant ,variable, (a-b) or object)
    }
    catch (int x)
    {
        cout << "Exception divide by zero occurred" << endl;
    }
    // If the type of object thrown matches the arg type of catch statement then catch block is executed , else abort() function is invoked by default.

    try
    {
        cout << "We are inside the try block" << endl;
        divide(10, 20, 30); //-3
        divide(10, 10, 20); //caught the exception
    }
    catch (int i)
    {
        cout << "caught the exception" << endl;
    }

    test(1); //caught an int exception
    test(0); //handle char types
    test(-1); //caught double excpt
    test(5); //no exception occurred



 cout<<" Inside main"<<endl;
 try
 {
 divide(10.5,2.0);
 divide(20.0, 0.0);
 }
 catch(double)
 {
 cout<<"caught double inside main"<<endl;
 }
 //When an exception is rethrown, it will not be caught by same catch
//statement or any other catch in that group.
// It will be caught by an appropriate catch in the outer try/catch
//sequence only 
    return 0;
}