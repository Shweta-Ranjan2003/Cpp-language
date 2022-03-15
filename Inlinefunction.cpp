#include <iostream>
/*
Inline function:- If the inline function is being used when the function is called,the inline function expands
the whole function code at the point of a function call,instead of running the function.
Inline functions are considered to be used when the function is small otherwise it will not perform well.

Default arguments:- Default arguments are those values which are used by the function if we don’t input our value.
It is recommended to write default arguments after the other arguments.

constant arguments:- Constant arguments are used when you don’t want your values to be changed
or modified by the function. 
*/

using namespace std;

inline int product(int a , int b )
{
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}
int product2(int a,int b)
{
    static int c=0;
    c++;
    return a*b+c;
}

float moneyReceived(int amount , float factor=1.04)
{
    return amount*factor;
}
//int strlen(const char *p){   //Constant arguments are used when you don’t want your values to be
                               // changed or modified by the function.
//}

int main()
{  int a=5,b=2;
 cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
 cout<<"the product of "<<a<<" and "<<b<<" is "<<product2(a,b)<<endl; //11
 cout<<"the product of "<<a<<" and "<<b<<" is "<<product2(a,b)<<endl; //12
 cout<<"the product of "<<a<<" and "<<b<<" is "<<product2(a,b)<<endl; //13

  int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyReceived(money)<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recieve "
    <<moneyReceived(money, 1.1)<<endl;  //we have given factor value 1.1 so default argument will not be used.
    
    return 0;
}