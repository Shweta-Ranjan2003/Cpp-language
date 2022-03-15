#include <iostream>
/* There are three types of basic control structures:-
1. Sequence Structure :- refers to the sequence in which program execute instructions one after another.
2. Selection Structure:-  “if-else statements” or by “switch case statements”. 
3. Loop Structure:- Loop structure refers to the execution of an instruction in a loop
                    until the condition gets false.
*/
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age here:"<<endl;
    cin>>age;
    //**********Selection Structure***********
    //if else-If elseif else ladder
    if ((age<18) && (age>0))
    {
        cout<<"You are a minor"<<endl;
    }
    else if (age==18)
    {
        cout<<"you have just reached the age of adult"<<endl;
    }
    else if (age>18)
    {
        cout<<"you are a adult"<<endl;
    }
    else
    {
        cout<<"you haven't born yet"<<endl;
    }
    
    //Switch case
    switch (age)
    {
    case 18:
        cout<<"congrats you can now drive on city roads"<<endl;
        break; //break is used to bring programm control out of the loop or switch statement
               //This break statement terminates the smallest enclosing loop
               //if we dont use break here then after printing this cout statement it we print all the other 
               // switch statements also .
    case 12:
          cout<<"wait for 6 more years to drive"<<endl;
          break;
    case 25:
          cout<<"you are adult enough to drive on highways"<<endl;
          break;
    default:
          cout<<"you are not any special case"<<endl;
        // break;  //adding break here doesn't makes any difference
    }
    
     /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/
    
    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    for (int i = 1; i <= 5; i++)
    {
        if (i==3)
        {
            continue;  //This statement skips the rest of the loop statement and starts the next iteration 
                      // of the loop to take place. here no. 3 will not print and rest will print
        }
        
        cout<<i<<endl;
    }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
        
    // do while loop always atleast prints once because condition is checked after the first print
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    //printing table of 6 using do while loop
    // int i=1;
    // do
    // {
    //    cout<<6*i<<endl;
    //    i++;
    // } while (i<=10);
    
    
    return 0;
}