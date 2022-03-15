#include <iostream>

using namespace std;
class mall
{
private:
    int shopID[50];
    string shopItem[50];

public:
    int count;
    void initcount() { count = 0; }
    void setINFO();
    void printINFO();
};

void mall::setINFO()
{
    cout << "Dear " << count + 1 << " member please enter your shopID " << endl;
    cin >> shopID[count];
    cout << "Dear " << count + 1 << " member please enter your shopItem " << endl;
    cin >> shopItem[count];
    count++;
}
void mall ::printINFO()
{
    for (int i = 0; i < count; i++)
    {
        cout << "For member no. " <<i+1<< " shopID is " << shopID[i] << " and their shopItem is "
             << shopItem[i] << endl;
    }
}

int main()
{
    mall DB;
    DB.initcount();
    for (int i = 0; i < 3; i++)
    {
         DB.setINFO();
    }
    DB.printINFO();
    return 0;
}