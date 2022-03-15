#include <iostream>
#include <list>
#include <map>
/*
A List is a bi-directional linear storage of elements. Few key features as to why a list should be used is, 

It gives faster insertion and deletion operations.
Its access to random elements is slow.
*/

using namespace std;
void display(list<int> &A)
{
    list<int> :: iterator it;
    for ( it = A.begin(); it!=A.end(); it++) //A.end() means iterator will point to the end element.
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
   list<int> list1;
   list1.push_back(2);
   list1.push_back(4);
   list1.push_back(6);
   list1.push_back(8);
   display(list1); // 2 4 6 8
   list1.push_front(10);
   display(list1); // 10 2 4 6 8
//    list1.pop_back();
//    display(list1); // 10 2 4 6
//    list1.pop_front();
//    display(list1); // 2 4 6
//    list1.remove(4); //removes all the occurrences of 4.
//    display(list1); //2 6
    list1.sort();
    display(list1); //2 4 6 8 10
    list1.reverse();
    display(list1); // 10 8 6 4 2
    
   list <int> list2(4); //Empty list of size 4 , it is imp to declare size of list when we dereference
                        //iterator and add value to list.
   list<int> :: iterator ptr; //or  list<int> :: iterator ptr = list2.begin();
   ptr = list2.begin();
   *ptr = 12;
   ptr++;
   *ptr = 14;
   ptr++;
   *ptr = 16;
   ptr++;
   *ptr = 18;
   display(list2);
   list2.reverse();
   list1.merge(list2);
   display(list1); // 10 8 6 4 2 18 16 14 12
   list1.sort();
   display(list1); // 2 4 6 8 10 12 14 16 18

   //A map in C++ STL is an associative container which stores key value pairs. 
   //a map stores a key of some data type and its corresponding values of some data type.
   //Syntax:- map <data_type_of_key,   data_type_of_value>  variable_name;
    map <string , float> marksMap;
    map <string , float> :: iterator iter = marksMap.begin();
    marksMap["Shweta"] = 99.99;
    marksMap["Rohan"] = 95.55;
    marksMap["Parth"] = 23.09;

    //We have one more method to insert elements in a map. We can use .insert()
     // Syntax for using .insert is:
     // marksMap.insert({pair_1,pair_2......pair_n});

     marksMap.insert({{"Rohini" , 94.05},{"Sakura", 95}});
    for (iter = marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl; 
        //.first accesses the first value of a pair that is our map key here, and 
        //.second accesses the second value of the pair that is our map values here.
        //and it will diplay the key and value in alphabetical order.
    }
    cout<<"The size of the map is "<<marksMap.size()<<endl; //size of map is 5.
    cout<<"The empty value of the map is "<<marksMap.empty()<<endl; //empty element is 0
    
   
    return 0;
}