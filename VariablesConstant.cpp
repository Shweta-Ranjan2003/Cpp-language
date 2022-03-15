#include <iostream>
/* There are different types of Data types in c++ :-
1.Built-in data types:- int , float , char , double(more precise than float) , boolean(true(1) or false(0)).
2. User defined data types :- struct , union , enum.
3.Derived data types :- Array , function , pointer. 

Variables(container to store data) ->its name can start with letter or underscore and after initial letter we can
add number . Variable name can range from 1 to 255. 
Local variable:- declared inside the braces of any function and can be accessed only from there.
Global variable:- declared outside any function and can be accessed from anywhere.
we can make local and global variable of same name but local will take precedence over global.

Constants -> are unchangeable; when a constant variable is initialized in a program, 
its value cannot be changed afterwards.
*/
using namespace std;
void sum()
{
    int num=20; //local variable 
    cout<<num; 
}
int glo=50; //global variable
int main()
{
    int number=5; //local variable
    // int number=8; //error be redeclaration of variable number.
    cout<<"Hello " << number <<" people\n";
    number =8;
    cout<<"Hello " << number <<" people\n";
    cout<<"value of sum is ";
    sum();
    //cout<<num; //num is a local variable of sum function so cannot be called in this function 
    cout<<"\n"<<glo; //it can be used because its a global variable
    int glo=10;
    cout<<"\n"<<glo; //it will give 10 because local variable will take precedence over global variable
    cout<<"\n"<<::glo<<endl; //it will give 50 because we used SCOPE RESOLUTION operator to print global value

    const int var=56;
    cout<<"the value of constant var is "<<var<<endl;
    //var=59; //this will give error because we cannot reassign value to read-only variable(constants)
                 
                 // ************* Float, double and long double Literals****************
    float d=5.99f; //here we added f as suffix explicitly because by default compiler takes floating no. as double
    long double e=5.99l; //l means long double
    cout<<"The size of 5.99 is  "<<sizeof(5.99)<<endl;  //8 bytes because by default it is double
    cout<<"The size of 5.99f is  "<<sizeof(5.99f)<<endl; //4 bytes 
    cout<<"The size of 5.99F is  "<<sizeof(5.99F)<<endl; //4 bytes ,using f or F doesn't makes any diff.
    cout<<"The size of 5.99l is  "<<sizeof(5.99l)<<endl; //12 bytes - long double
    cout<<"The size of 5.99L is  "<<sizeof(5.99L)<<endl; //12 bytes

   
    // *************Reference Variables****************
    //Reference variables can be defined as another name for an already existing variable.
    //These are also called an alias. 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    // float x = 455;
    // float & y = x; //now y is a alias of x, both are same memory address variable
    // cout<<x<<endl; //455
    // cout<<y<<endl; /455
    //A reference variable refers to the same memory address as does a variable, and a pointer holds the
    //memory address of a variable.

    // *************Typecasting**************** 
    //Typecasting can be defined as converting one data type into another.
    int a = 45;   
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;  //45
    cout<<"The value of a is "<<float(a)<<endl;  //45

    cout<<"The value of b is "<<(int)b<<endl;  //45
    cout<<"The value of b is "<<int(b)<<endl;  //45
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;  //90.46
    cout<<"The expression is "<<a + int(b)<<endl;  //90
    cout<<"The expression is "<<a + (int)b<<endl;  //90

    return 0;
}
/*96 reserved keywords in cpp are:-
alignas (since C++11)
alignof (since C++11)
and
and_eq
asm
atomic_cancel (TM TS)
atomic_commit (TM TS)
atomic_noexcept (TM TS)
auto (1)
bitand
bitor
bool
break
case
catch
char
char8_t (since C++20)
char16_t (since C++11)
char32_t (since C++11)
class (1)
compl
concept (since C++20)
const
consteval (since C++20)
constexpr (since C++11)
constinit (since C++20)
const_cast
continue
co_await (since C++20)
co_return (since C++20)
co_yield (since C++20)
decltype (since C++11)
default (1)
delete (1)
do
double
dynamic_cast
else
enum
explicit
export (1) (3)
extern (1)
false
float
for
friend
goto
if
inline (1)
int
long
mutable (1)
namespace
new
noexcept (since C++11)
not
not_eq
nullptr (since C++11)
operator
or
or_eq
private
protected
public
reflexpr (reflection TS)
register (2)
reinterpret_cast
requires (since C++20)
return
short
signed
sizeof (1)
static
static_assert (since C++11)
static_cast
struct (1)
switch
synchronized (TM TS)
template
this
thread_local (since C++11)
throw
true
try
typedef
typeid
typename
union
unsigned
using (1)
virtual
void
volatile
wchar_t
while
xor
xor_eq
*/