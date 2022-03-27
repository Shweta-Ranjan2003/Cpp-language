#include <iostream>
using namespace std;
/*
compile time polymorphism:- 1.function overloading
2.Operator overloading :- performing operator on user defined data type
syntax   returntype operator @ (arguments) //eg. void operator + (class &ref)
two types of operators :-
1. unary :- which takes only one operand like ++ , -- , - etc.
2. binary:- which take two operand like + , * , < etc.
There are 5 operator which cannot be overloaded
. .* :: ?: sizeof()

no. of arguments:-
unary:-  member func (0 argument) , friend func (1 argument)
binary:-  member func (1 argument) , friend func (2 argument)
*/
class uni{
    int a,b;
    public:
    void getdata( int x , int y){
        a = x;
        b = y;
    }
    void display();
    void operator ++ (){ //pre increment
        a = a+1;
        b = b+1;
    }
    void operator -- (int){  //in post decrement we give one argument even though its unary and member func
        a = a-1;
        b = b-1;
    }
    friend void operator - (uni &r1);
};
void uni::display(){
    cout<<"value of a is " <<a<<endl;
    cout<<"value of b is " <<b<<endl;
}
void operator - (uni &r1){
  r1.a = -r1.a;
  r1.b = -r1.b;
}
//Binary 
class complex{
  int x,y;
  public:
  complex(){}
  complex(int a , int b){
      x=a;
      y=b;
  }
  void display(){
      cout<<"real part = "<<x<<endl;
      cout<<"imaginary part = "<<y<<endl;
  }
  complex operator + (complex &r1){
      complex temp;
      temp.x = x+r1.x; //c1's x + c2's x because c1 is used to call this func and c2 is passed by reference
     temp.y= y+r1.y;
     return temp;
  }
  friend complex operator - (complex &r1 , complex &r2);
};
complex operator - (complex &r1 , complex &r2){
    complex temp;
    temp.x = r1.x-r2.x;
    temp.y = r1.y-r2.y;
    return temp;
}
int main()
{ 
  uni obj;
  obj.getdata(-10,20);
  obj.display();
  ++obj;  //operator first and then operand
  obj.display();
  obj--; //operand first and then operator in post decrement and increment.
  obj.display();
  -obj;
  obj.display();
//Binary
   complex c1(5,7);
   c1.display();
   complex c2(10,15);
   c2.display();
   complex c3;
   c3=c1+c2; //or we can write like this c3=c1.operator+ (c2)
   c3.display();
   complex c4;
   c4=c2-c1; //c4=c2.operator - (c1)
   c4.display();

 return 0;
}