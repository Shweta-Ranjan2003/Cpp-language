#include <iostream>
/*
The virtual base class is a concept used in multiple inheritances to prevent ambiguity
between multiple instances. For example: suppose we created a class “A” and two classes “B” and “C”,
are being derived from class “A”. But once we create a class “D” which is being derived from class “B” and “C”

the data members and member functions of class “A” will be inherited twice in class “D”
because class “B” and “C” are the parent classes of class “D” and they both are being derived from class “A”.

So when the class “D” will try to access the data member or member function of class “A”
it will cause ambiguity for the compiler and the compiler will throw an error.
To solve this ambiguity we will make class “A” as a virtual base class.

syntax:-
class A{};
class B: public virtual A{};
class C: virtual public A{};         //order of writing virtual or public doesn't matter
class D: public B , public C{};
*/

using namespace std;
class Student
{
protected:
    int Roll_no;

public:
    void set_Roll_no(int a)
    {
        Roll_no = a;
    }
    void display_Rollno()
    {
        cout << " Your roll no. is " << Roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, english;

public:
    void set_Marks(float a, float b)
    {
        maths = a;
        english = b;
    }
    void display_Marks()
    {
        cout << " marks of maths: " << maths << endl
             << " marks of english: " << english << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_Score(float a)
    {
        score = a;
    }
    void display_Score()
    {
        cout << " score of sports: " << score << endl;
    }
};
class Result : public Test, public Sports
{
    float result;

public:
    void display_Result()
    {
        result = maths + english + score;
        display_Rollno();
        display_Marks();
        display_Score();
        cout << " final result is " << result << endl;
    }
};

int main()
{
    Result shweta;
    shweta.set_Roll_no(69);
    shweta.set_Marks(99.0, 98.0);
    shweta.set_Score(9);
    shweta.display_Result();

    return 0;
}