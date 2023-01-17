#include <iostream>
using namespace std;
void change(int *arr , int size){
    int var;
    for (int i = 0; i < size ; i++)
    {
        cout<<"The value you want to replace with: ";
        cin>>var;
        arr[i]=var;
    }
}
int main()
{ 
 int ar[] = {1,2,3,4};
  change(ar , 4);
  for (int i = 0; i < 4; i++)
  {
    cout<<ar[i]<<" ";
  }
  
 return 0;
}