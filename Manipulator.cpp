#include <iostream>
#include <iomanip>
using namespace std;
/*
The main advantage of using manipulator functions is that they facilitate that formatting of input and output streams.
Pre-defined manipulators:-
1.endl; :- output manipulator to generate a carriage return or line feed character.
2. setbase() :- used to convert the base of one numeric value into another base.
3. setw() :- set width used to specify the minimum number of character positions on the output field a variable will consume 
4. setfill() :- used to specify a different character to fill the unused filed width of the value.
5. setprecision() :- used to control the number of digits of an output stream display of a floating point value. 
And setprecision() manipulator prototype is defined in the header file <iomanip.h>. (It basically round off the value in the precision you have given)
6. ends:- used to attach a null terminating character('\O') at the end of string.
7. ws:- white space is used to ignore the leading white space that precedes the first field.
*/
int main()
{ 
 string name;
 cout<<"enter the name "<<endl;
 getline(cin , name);
 cout<<setw(5)<<name<<endl;
 char names[20];
 cout<<"enter the name "<<endl;
 cin>>ws;
 cin>>names;
 cout<<names<<ends;
 cout<<endl;
 return 0;
}