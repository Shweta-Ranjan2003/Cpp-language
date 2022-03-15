#include<iostream>
using namespace std;
 

int  fib_recursive(int n )
   {
      if (n==1 || n==2)
      {
          return n-1;
      }
      else
      {
          return fib_recursive(n-1)+fib_recursive(n-2);
      }
   }
    int fib_iterative(int n)
    {
        int first=0,second=1,next;
        for (int i = 0; i < n; i++)
        {
            cout<<first<<endl;
            second=first+second;
          first=second-first; 
        }
          return 0;
        }
          /*
                 or
         next=first+second;
          first=second;
          second=next; 
        }
        return first;
    }
   */
// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3) //recursive approch is not always good because of the repetitive function 
//call and therefore for fibonacci series iterative approch works better

int factorial(int n)
{
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main(){
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;
    // cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
    cout<<"The fibonacci sequence of "<<a<< " is "<<endl;
    fib_iterative(a);
    cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib_recursive(a)<<endl;
    return 0;
}
