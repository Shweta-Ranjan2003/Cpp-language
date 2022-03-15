#include <iostream>
/*
Structure is a user-defined data type used to combine different types of data types.
a keyword “typedef” before struct and after the closing bracket of structure, we have written "nickname".

Unions are similar to structures but they provide better memory management then structures. Unions use shared 
memory so only 1 variable( data type which has maximum memory for the allocation.) can be used at a time.

Enums are Enumerated type (enumeration) is a user-defined data type which can be assigned some limited values.
Enums used to make the program more readable. Syntax:-enum enumerated-type-name{value1, value2, value3…..valueN};

*/

using namespace std;
typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};
int main()
{
//    enum Meal{ breakfast, lunch, dinner};
//     Meal m1 = lunch;
//     cout<<(m1==2)<<endl;  //will return 0 means false.
//     cout<<(m1==1)<<endl;  //will return 1 means true.
//     cout<<breakfast<<endl;  //0
//     cout<<lunch<<endl;  //1
//     cout<<dinner<<endl;  //2


    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

     ep harry;
     struct employee shubham;
     struct employee rohanDas;
     harry.eId = 1;
     harry.favChar = 'c';
     harry.salary = 120000000;
     cout<<"The value is "<<harry.eId<<endl; 
     cout<<"The value is "<<harry.favChar<<endl; 
     cout<<"The value is "<<harry.salary<<endl;  
     shubham.favChar='s';
     cout<<"shubhams fav char is  "<<shubham.favChar<<endl;
    return 0;
}