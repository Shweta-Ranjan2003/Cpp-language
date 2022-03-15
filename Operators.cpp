#include <iostream> //input output stream 
#include <iomanip> //for setw
/*Input stream:- flow of bytes takes place from input device(eg. keyboard) to the main memory.
output stream:- flow of bytes takes place from main memory to output device(eg. display).
// There are two types of header files:
1. System header files: It comes with the compiler
#include<iostream> etc
2. User defined header files: It is written by the programmer
#include "this.h" --> This will produce an error if this.h is no present in the current directory

//There are two commonly used manipulators(used in the formatting of output) in cpp
1. endl -> used to move to next line (like \n).
2. setw ->  is used to specify the width of the output.
*/
using namespace std;
int main()
{
    int num1,num2;
    cout <<"Enter the value of num1:\n"; //<< this is called Insertion operator
    cin>>num1; //>> this is called extraction operator 
    cout <<"the value of num1 given is "<<setw(4)<<num1<<endl;
    cout <<"Enter the value of num2:\n"; 
    cin>>num2;
    cout <<"the value of num1 given is "<<setw(5)<<num2<<endl; 

//Arithmetic operator ->  +,-,*,/,%
//unary operator -> ++,--
    cout<<"the sum is "<<num1+num2 <<endl;  //endl is used to move to another line(like \n)
//Assignment operator -> =,+=,-=,*=,/=,%=,<<=,>>=,&=,|=,^=
//comparison/relational operator(use parenthesis for using comparison operator) -> == , != , < , > , <= , >=  
    cout<<"comparison of number gives "<<(num1==num2)<<endl; //is equal to , returns 0 if not and 1 if its equal
    cout<<"comparison of number gives "<<(num1!=num2)<<endl; //is not equal to 
//Logical operator -> &&(and - both true) , ||(or - any one true) , !(not - reverse the state)
    cout<<"comparison of number gives "<<((num1==num2)&&(num1>=num2))<<endl; 
    cout<<"comparison of number gives "<<((num1==num2)||(num1>=num2))<<endl; 
    cout<<"comparison of number gives "<<(!(num1==num2))<<endl; 

    return 0;
}
