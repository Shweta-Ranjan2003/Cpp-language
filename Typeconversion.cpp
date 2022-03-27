#include <iostream>
using namespace std;
/*
4 types of situation might arise in the data conversion
1. coversion from basic type to basic type
2. coversion from basic type to class type
3. coversion from class type to basic type
4. coversion from class type to class type
*/
class time{
    int hrs,mins;
    public:
    time(){}
    time(int h){
        hrs = h/60;
        mins = h%60;
    }
    void display(){
        cout<<" hrs " <<hrs<<endl;
        cout<<" mins "<< mins<<endl;
    }
};
class distance1{
    float km;
    public:
    distance1(){
    }
    distance1(float k){
        km=k/1000;
    }
    void display(){
        cout<<" km " <<km<<endl;
    }
        
};
int main()
{ 
//basic to basic  
float pi=3.142;
int x;
x = pi;
cout<<x<<endl; //3
//basic to class
//it is accomplished by the use of an appropriate constructor with one parameter.
//this constructor must take basic data type as a parameter which is to be converted
 time t1;
 int duration=85;
  t1=duration;
 t1.display();
 //class to basic
distance1 d1;
float m1;
cin>>m1;
d1=m1;
d1.display();
 return 0;
}