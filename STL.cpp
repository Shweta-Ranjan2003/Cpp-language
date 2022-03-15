#include <iostream>
#include <vector>
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

1. Sequence Containers:- stores that data in a linear fashion. It includes Vector, List, Dequeue etc. 
2. Associative Containers:-designed in a way that enhances the accessing of some element in that container.
For eg- Set, Multiset, Map, Multimap etc.  They store their data in a tree-like structure.
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
void display(vector<int> &v){ 
    for (int i = 0; i < v.size(); i++) // returns the size of the vector.
    {
        cout<<v.at(i)<<" ";//v.at(i) and v[i] is same.
    }
    cout<<endl;
}
int main(){ 
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
    display(vec1);  // 2 4 6 8 
    vec1.push_back(10);
    display(vec1);   // 2 4 6 8 10
    vec1.pop_back(); //deletes the last element of the vector.
    display(vec1); //2 4 6 8

    //Insert (iterator, element to insert): // position the iterator is pointing to
    vector<int> :: iterator iter = vec1.begin();//begin() points the iterator to starting of vector.
    vec1.insert(iter,0);
    display(vec1); //0 2 4 6 8
    vec1.insert(iter+3 ,2, 5); //2 times 5 will be added at position of iter+3.
    display(vec1); //0 2 4 5 5 6 8

    vector<int> vec2(6,3); //6-element vector of 3's
    display(vec2); //3 3 3 3 3 3 
    vector<int> vec3(vec2);
    display(vec3); ////3 3 3 3 3 3 

    /*
    vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s
    */
    return 0;
}