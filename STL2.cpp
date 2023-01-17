#include <iostream>
#include <map>
#include <set>
using namespace std;
void displaySet(set<int> &s){
    for (auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;
}
void displayMap(map <string , float> m){
    for (auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
}
int main()
{
    /*
    //--------------Set----------------
    // Set stores only unique elements (no duplicates)
    // Output is in sorted manner - implementation is like BST (search time - log(n))
    // erase , find , insert , count - log(n)
    // size , begin , end , empty - O(1)
    // Unordered set - not sorted - implementation is like hash table (search time - O(n))
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(1);
    displaySet(s); // 0 1 5 6
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it); //1 will be deleted
    displaySet(s); // 0 5 6
    cout<<"1 is present or not "<<s.count(1)<<endl; //0
    set<int>::iterator itr = s.find(6);
    cout<<*itr<<endl; //6
    */
    
    // -------------------Map--------------------
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
    cout<<"Finding Shweta "<<marksMap.count("Shweta")<<endl;
    marksMap.erase("Shweta");
    marksMap.erase("Rohan");
    displayMap(marksMap);
    cout<<"The size of the map is "<<marksMap.size()<<endl; //size of map is 5.
    cout<<"The empty value of the map is "<<marksMap.empty()<<endl; //empty element is 0
    
   
    return 0;
}