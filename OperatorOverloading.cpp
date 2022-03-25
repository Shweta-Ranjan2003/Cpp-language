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
int main()
{ 
  uni obj;
  obj.getdata(-10,20);
  obj.display();
  ++obj;
  obj.display();
  obj--;
  obj.display();
  -obj;
  obj.display();


 return 0;
}