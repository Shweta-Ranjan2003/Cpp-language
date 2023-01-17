#include <iostream>
#include <vector>
#include <deque>
#include <list>
/*
STL:- Standard template library . Library of generic classes and functions, is used for saving time.
 STL is a set of C++ template classes that provide generic classes and function 
that can be used to implement data structures and algorithms
Components of STL:- 1. Containers - is an object to store data and are implemented templates classes.
2. Algorithm - a set of instructions which manipulates the input data to arrive at some desired result.
3. Iterators - Object points to an element in a container, it is handled just like pointer and it
connects algo to container . Iterators moves as instructed by the Algorithm . 
*/
/*
Containers are themselves of three types: 

1. Sequence Containers:- stores that data in a linear fashion. It includes Array ,Vector, List, Dequeue etc. 
# Container Adaptors - Stack , Queue , priority queue
2. Associative Containers:-designed in a way that enhances the accessing of some element in that container.
For eg- Set, Multiset, Map, Multimap etc.  They store their data in a tree-like structure.
# Unordered Associative - Unordered Set , Unordered Map , Unordered Multiset , Unordered Multimap
3. Derived Containers:- these containers are derived from either the sequence or the associative containers.
 Some examples of derived containers are Stack(LIFO), Queue(FIFO), Priority Queue, etc. 

In sequence containers, we have Vectors, which has following properties:
Faster random access to elements in comparison to array
Slower insertion and deletion at some random position, except at the end.
Faster insertion at the end.
 
In Lists, we have,
Random accessing elements is too slow, because every element is traversed using pointers.
Insertion and deletion at any position is relatively faster, because they only use pointers, which can easily be manipulated.

In associative containers, every operation except random access is faster in comparison to 
any other containers, be it inserting or deleting any element.

In Derived containers, we cannot specifically tell which operation is faster or slower.
*/
//******Vector*********
//vector<data_type> vector_name; 
//unlike arrays, vector size can change dynamically, with their storage being handled automatically 
//by the container.

using namespace std;
//  template <class T>
void displayVec(vector<int> &v){ 
    for (int i = 0; i < v.size(); i++) // returns the size of the vector.
    {
        cout<<v.at(i)<<" ";//v.at(i) and v[i] is same.
    }
    cout<<endl;
}
void displaydeque(deque<int> &d){
    for(int i:d)
    {
    cout<<i<<" ";
    }
    cout<<endl;
}
void displayList(list<int> &A)
{
    list<int> :: iterator it;
    for ( it = A.begin(); it!=A.end(); it++) //A.end() means iterator will point to the end element.
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //OR
    //for(int i:A){
    //    cout<<i<<" ";
    //}
    //cout<<endl;
}

int main(){ 
    //-----------Vector----------
    // More operation like (v.capacity() - capacity of vector like the size is 2 and if you add 3rd element then then the capacity will become 4 directly from 2 , i.e it doubles its size dynamically )
    // (v.size() , v.front() , v.back() , v.clear()) etc.
    
    vector<int> vec1; //vector is the class template that we got from including <vector> header file
                      //int is the data type we defined for the vec1 object we created.
    int element, size;
    cout<<"Enter the size of your vector"<<endl; //4
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: "; // 2 4 6 8
        cin>>element;
        vec1.push_back(element); //push_back(), to insert elements in it from the rear end.
    }
    displayVec(vec1);  // 2 4 6 8 
    vec1.push_back(10);
    displayVec(vec1);   // 2 4 6 8 10
    vec1.pop_back(); //deletes the last element of the vector.
    displayVec(vec1); //2 4 6 8

    //Insert (iterator, element to insert): // position the iterator is pointing to
    vector<int> :: iterator iter = vec1.begin();//begin() points the iterator to starting of vector.
    vec1.insert(iter,0);
    displayVec(vec1); //0 2 4 6 8
    vec1.insert(iter+3 ,2, 5); //2 times 5 will be added at position of iter+3.
    displayVec(vec1); //0 2 4 5 5 6 8

    vector<int> vec2(6,3); //6-element vector of 3's
    displayVec(vec2); //3 3 3 3 3 3 
    vector<int> vec3(vec2);
    displayVec(vec3); ////3 3 3 3 3 3 
    
    /*
    vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s
    */
/*
   //------------Deque-----------
   // Double ended queue - Push and pop from both ends.
   //(d.at(1), d.erase()-> we have to give iterator from where to where we want to erase the elements. , d.clear()-> it makes it size 0 i.e removes all the elements)
deque<int> d;
d.push_back(1);
d.push_front(2);
displaydeque(d); // 2 1
d.pop_back();
displaydeque(d); // 2
d.push_back(1);
d.pop_front();
displaydeque(d); // 1
d.push_back(3);
d.push_back(4);
displaydeque(d); //1 3 4
cout<<d.front()<<endl; //1
cout<<d.back()<<endl; //4
cout<<"Empty or not -> "<<d.empty()<<endl; //0
d.erase(d.begin(), d.begin()+1);
displaydeque(d); //3 4
*/
  
  //------------List------------
//A List is a bi-directional linear storage of elements. Few key features as to why a list should be used is, 
//It gives faster insertion and deletion operations.
//Its access to random elements is slow.
//(list1.erase(list1.begin()) -> this will erase first element , list1.size())
/*
list<int> list1;
 list1.push_back(2);
 list1.push_back(4);
 list1.push_back(6);
 list1.push_back(8);
 displayList(list1); // 2 4 6 8
 list1.push_front(10);
 displayList(list1); // 10 2 4 6 8
//    list1.pop_back();
//    displayList(list1); // 10 2 4 6
//    list1.pop_front();
//    displayList(list1); // 2 4 6
//    list1.remove(4); //removes all the occurrences of 4.
//    displayList(list1); //2 6
    list1.sort();
    displayList(list1); //2 4 6 8 10
    list1.reverse();
    displayList(list1); // 10 8 6 4 2
    
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
   displayList(list2); //12 14 16 18
   list2.reverse();
   list1.merge(list2);
   displayList(list1); // 10 8 6 4 2 18 16 14 12
   list1.sort();
   displayList(list1); // 2 4 6 8 10 12 14 16 18
*/
    return 0;
}