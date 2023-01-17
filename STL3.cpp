#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{ /*
    //----------Stack-------
    //last in first out
 stack<string> s;
 s.push("Shweta");
 s.push("Pradyumn");
 s.push("Aashi");
 cout<<s.top()<<endl; //Aashi
 s.pop();
 cout<<s.top()<<endl; //Pradyumn
 cout<<"size of stack "<<s.size()<<endl; //2
 cout<<"Empty or not "<<s.empty()<<endl; //0
 */
/*
 //------------Queue----------
 //First in first out
 queue<char> q;
 q.push('a');
 q.push('b');
 q.push('2');
 cout<<"Size "<<q.size()<<endl; //3
 cout<<"first element "<<q.front()<<endl; //a
 q.pop();
 q.pop();
 cout<<"Now the first element is "<<q.front()<<endl; //2
 cout<<"Size "<<q.size()<<endl; //1
 */
//---------Priority Queue---------
//By default the priority queue is max heap
//Max heap
priority_queue<int> maxi;
//Min heap - priority_queue <Type, vector<Type>, ComparisonType > min_heap;
priority_queue<int , vector<int> , greater<int>> mini;

maxi.push(1);
maxi.push(3);
maxi.push(2);
maxi.push(0);
cout<<"size-> "<<maxi.size()<<endl; //4
int n = maxi.size();
for (int i = 0; i < n; i++)
{
    cout<<maxi.top()<<" "; // 3 2 1 0
    maxi.pop();
}
cout<<endl;
mini.push(5);
mini.push(10);
mini.push(3);
mini.push(0);
cout<<"size-> "<<mini.size()<<endl; // 4
int N = mini.size();
for (int i = 0; i < N; i++)
{
    cout<<mini.top()<<" "; // 0 3 5 10
    mini.pop();
}
cout<<endl;
cout<<"Is max heap and mean heap empty ->"<<maxi.empty()<<" "<<mini.empty()<<endl; // 1 1
 return 0;
}