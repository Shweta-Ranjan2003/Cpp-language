#include <iostream>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
using namespace std;
/*
Sets are a type of associative container in which each element has to be unique because the value of the element 
identifies it. The values are stored in a specific sorted order i.e. either ascending or descending.

Multisets are a type of associative containers similar to the set, with the exception that multiple 
elements can have the same values.

An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table 
so that the insertion is always randomized. All operations on the unordered_set takes constant time O(1) 
on an average which can go up to linear time O(n) in worst case which depends on the internally used hash function

Unordered multiset is an associative container that contains set of possibly non-unique objects of type Key. 
Search, insertion, and removal have average constant-time complexity. Internally, the elements are not sorted 
in any particular order, but organized into buckets. Which bucket an element is placed into depends entirely 
on the hash of its value. 

Maps are associative containers that store elements in a mapped fashion. Each element has a key value 
and a mapped value. No two mapped values can have the same key values
it will diplay the key and value in alphabetical order.

Multimap is similar to a map with the addition that multiple elements can have the same keys.

An unordered_map is like a data structure of dictionary type that stores elements in itself. 
It contains successive pairs (key, value), which allows fast retrieval of an individual element 
based on its unique key.Internally unordered_map is implemented using Hash Table - no ordering

An unordered_multimap- The internal implementation of unordered_multimap is the same as that of 
unordered_map but for duplicate keys
*/
int main()
{  
    /* ---------------------SET------------------------
    set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for (auto& str : a) {
        cout << str << ' '; // F G
    }
    cout << '\n';
    set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);
 
    for (auto i : s1) {
        cout << i << ' '; //12 10 5 4
    }
    */

   //-----------------------Multi Set-------------------
   /*
   multiset<int> a;
    a.insert(10);
    a.insert(10);
    a.insert(10);
 
    cout << a.count(10) << endl;  //3
    // removing single instance from multiset
    // it will remove only one value of 10 from multiset
    a.erase(a.find(10));
    cout << a.count(10) << endl;  //2
    // removing all instance of element from multiset it will remove all instance of value 10
    a.erase(10);
    // it will give output 0 because all instance of value is removed from multiset
    cout << a.count(10) << endl;  //0
    a.insert(50);
    a.insert(25);
    a.insert(70);
    multiset<int, greater<int> >::iterator itr;
    for (itr = a.begin(); itr != a.end(); ++itr) {
        cout << *itr << " "; // 25 50 70
    }
    cout << endl;
    */

    //-----------Map----------
    /*
    map<std::string, int> map;
  map["one"] = 1;
  map["two"] = 2;
  map["three"] = 3;
  
  std::map<std::string, int>::iterator it = map.begin();
  
  while (it != map.end())
  {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    ++it;
  }
  */

 //-----------------Multi Map-------------
 /*
 multimap<int, int> gquiz1; // empty multimap container
 
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(6, 10));
 
    multimap<int, int>::iterator itr;
    cout << "\nThe multimap gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
    */

   //----------unordered_set----------
   /*
   unordered_set <string> stringSet ;
  
    stringSet.insert("code") ;
    stringSet.insert("in") ;
    stringSet.insert("c++") ;
    stringSet.insert("fast") ;
    stringSet.insert("is") ;
    stringSet.insert("fast") ;
  
    string key = "slow" ;
  
    //  find returns end iterator if key is not found,
    //  else it returns iterator to that key
    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found" << endl << endl ;
    else
        cout << "Found " << key << endl << endl ;
  
    key = "c++";
    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found\n" ;
    else
        cout << "Found " << key << endl ;
  
    // now iterating over whole set and printing its
    // content
    cout << "All elements :\n";
    unordered_set<string> :: iterator itr;
    for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
        cout << (*itr) << endl;
        //is fast c++ in code
    */

   //-----------unordered_multiset------------
   /*
   unordered_multiset<int> ums1;
 
    //  Initialization by intializer list
    unordered_multiset<int> ums2 ({1, 3, 1, 7, 2, 3,
                                   4, 1, 6});
 
    //  Initialization by assignment
    ums1 = {2, 7, 2, 5, 0, 3, 7, 5};
 
    //  empty() function return true if set is empty otherwise false
    if (ums1.empty())
        cout << "unordered multiset 1 is empty\n";
    else
        cout << "unordered multiset 1 is not empty\n";
 
    //  size() function returns total number of elements in data structure
    cout << "The size of unordered multiset 2 is : "
         << ums2.size() << endl;
 
    auto it = ums1.begin();
    for (; it != ums1.end(); it++)
        cout << *it << " "; //3 0 5 5 7 7 2 2
    cout << endl;
   */


   //----------unordered_map-----------
   //The unordered_map key can be stored in any order.
   /*
   unordered_map<string, int> umap;
  
  // inserting values by using [] operator
  umap["Shweta"] = 10;
  umap["Practice"] = 20;
  umap["Codes"] = 30;
  
  // Traversing an unordered map
  for (auto x : umap)
    cout << x.first << " " << 
            x.second << endl;
  // Codes 30
  // Shweta 10
  // Practice 20
  */

   //-----------unordered_multimap -------------
   /*
   unordered_multimap<string, int> umm{
        { "apple", 1 }, { "ball", 2 }, { "apple", 10 },
        { "cat", 7 },   { "dog", 9 },  { "cat", 6 },
        { "apple", 1 }
    };
    auto it = umm.begin();
 
    while (it != umm.end()) {
        if (it->second == 1)
            break;
        it++;
    }
 
    // Erase the element pointed by iterator it
    if (it != umm.end())
        umm.erase(it);
     
      cout << "After deletion of value 1 from umm" << endl;
    auto it1 = umm.begin();
 
    for (; it1 != umm.end(); it1++) {
        cout << "<" << it1->first << ", " << it1->second
             << ">  ";
        cout << endl;
    }
    //<dog, 9>
    //<cat, 6>
    //<cat, 7>
    //<ball, 2>
    //<apple, 10>
    //<apple, 1>
    */
 return 0;
}