#include <iostream>
/*
default parameters:- Its ability to have default specifications about the data type, 
when it receives no arguments from the main.
*/

using namespace std;
template <class T1=int, class T2=float, class T3=char>
class value{
    public:
        T1 a;
        T2 b;
        T3 c;
        value(T1 x, T2 y, T3 z) {
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main()
{
    value<> h(4, 6.4, 'c'); //here it will use default data type as mentioned in template 
    h.display();
    cout << endl;
    value<float, char, char> g(1.6, 'o', 'c'); //here it will use the data type as mentioned here instead 
                                              //of default data type given.
    g.display();
    return 0;
}