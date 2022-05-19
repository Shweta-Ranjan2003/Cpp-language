#include<iostream>
/*
Function overloading is a process to make more than one function with the same name but 
different parameters, numbers, or sequence.
*/
using namespace std;
class a{
    public:
    void show(){
        cout<<"hello";
    }
};
class b:public a{
    public:
    void show(){
        cout<<"hi";
    }
};

int sum(float a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl; //compiler will automatically differentiate 
    //according to the parameter that which function to call (if same name more than one function is given)
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;

    /*
    Function Overriding:- When function with same signature(or prototype) is redefined
    in the derived class [i.e. Base and derived class have same
    function], then on accessing the same function with the object
    of derived class, always derived class version of that function
    will be called, as it will override( or hide) the base class
    function
    • If we want to access the base class version of that function,
    then it can be accessed with the help of base class name and
    scope resolution operator used with the derived class object.
    • <derived_object>.<base_Class_name>::<function_name>(<parameters if required>);
    */
   b obj;
   obj.show(); //function overriding derived class function will be called
   obj.a::show();
    return 0;
}
