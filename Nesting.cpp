#include <iostream>
/*
Nesting of Member Functions
If one member function is called inside the other member function of the same class it is called 
nesting of a member function.
*/

using namespace std;
class binary
{
private:
    string s; 
    void chk_bin(void);  //now its a private member function and cannot be called directly using dot operator
                        // in main function but can be called inside other member function of the same class

public:
    void read(void); //can also be defined here but we are defining it later so we will have to use :: operator
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)  //lenght of string
    {
        if (s.at(i) != '0' && s.at(i) != '1')  //character at position in the string
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();  //private member function called inside other member function NESTING OF FUNCTIONS
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
  binary b;
    b.read();
    // b.chk_bin();
    b.ones_compliment();
    b.display();
    return 0;
}