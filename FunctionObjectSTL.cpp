#include <iostream>
#include <functional>
#include <algorithm>
/*
A function object(also called Functor) is a function wrapped in a class so that it is available as an object.

*/

using namespace std;

int main()
{
    int arr[] = {1, 73, 4, 2, 54, 17};
       //sort(address of first element, address of last element);
     sort(arr,arr+6); 
    //sort(arr,arr+5); //it will only sort is upto 5th element
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" "; // 1 2 4 17 54 73
    }
    cout<<endl;
    //If we want to sort the same array in descending order then we can use greater function object
    // Our sort function also takes a third parameter which is a functor ( functional object).
    sort(arr , arr+6 , greater<int>());
     for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" "; // 73 54 17 4 2 1
    }
    return 0;
}