#include <iostream>
#include <fstream>
/*
These are some useful classes for working with files in C++
fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
Using the constructor
Using the member function open() of the class
*/

using namespace std;

int main()
{
    // opening files using constructor and writing it.
    string text = "content of file1.cpp";
    // connecting our file with out stream
    ofstream out("text.txt");  //ofstream is a class and out is object we made and text.txt is the file we want
    //                           //to open. ofstream will help us to write in the file.
    out<<text; //just like cout writes on our display device, it will write the content of 
    //text string in the file text.txt.
    out.close(); //<object_name>.close();
    
    // opening files using constructor and reading it.
    string read;
     ifstream in("text.txt");  //read operation
    // in>>read; just like cin it will take file text content in the read string 
    //this will only gives first word .

    getline(in , read); //it will give first line and takes parameter as (object_name , string_name)
     //getline(in , read); //it will give only second line.
    cout<<read;
    in.close();
    return 0;
}