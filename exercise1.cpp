#include <iostream>
#include <math.h>
/*
Make a program that takes two coordinates point from the user and then tells distance between them
use constructor and function . distance formula is distance = under root ((x2-x1)^2 + (y2-y1)^2)
*/

using namespace std;
class dist
{
    int x,y;
    public:
    //    dist(){}
       dist(int a,int b)
       {
           x = a;
           y = b;
       }
   friend float distancee(dist a, dist b);
};
float distancee(dist a , dist b)
{
    
    return sqrt(pow(b.x-a.x,2)+ pow(b.y-a.y,2));
}

int main()
{
    int x1,x2,y1,y2;
     cout<<"enter the coordinates below"<<endl;
     cout<<"x1 = ";
     cin>>x1;
     cout<<endl<<"x2 = ";
     cin>>x2;
     cout<<endl<<"y1 = ";
     cin>>y1;
     cout<<endl<<"y2 = ";
     cin>>y2;
     cout<<endl;
     dist a(x1,y1);
     dist b(x2,y2);
     cout<<"distance between the points is "<<distancee(a,b)<<endl;
    //if we will call distancee(a,b) in next line after; then return value will not be printed.
    // cout<<"distance is ";
    // distancee(a,b); 

    return 0;
}