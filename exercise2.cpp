#include<iostream>
/*
make a program where you ask user to input details of their investment like principal amount,years,rate of
interest and then using constructions meathod give output as there return value after years.
*/
using namespace std;


class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){} //Need to initialize this void construction was,
                       // If we dont then we will have to make objects like this 
                       //Bankdeposit a= bankdeposit(p,y,r);
                       //we can't declare objects first then initialize it later like we did below.
                       //because constructions are automatically invoked whenever the object is created.
        BankDeposit(int p, int y, float r); // user may enter r value like 0.04 (4% = 4/100)
        BankDeposit(int p, int y, int r); //user may enter r value like 4 (4%)
        void show();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        // returnValue = returnValue * (1+interestRate); // or
        returnValue+=interestRate*returnValue;
    }
};

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate); //or returnValue+=interestRate*returnValue;
    }
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
}
int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}
