#include <iostream>
#include <fstream>
/*
C++ provides a special function, eof( ), that returns nonzero (meaning TRUE) when there are 
no more data to be read from an input file stream, and zero (meaning FALSE) otherwise.
*/

using namespace std;

int main()
{
// Using the member function open:
    
    // declaring an object of the type ofstream
    ofstream write;
     //connecting the object write to the text file using the member function open()
    write.open("text.txt");
    write<<"content of file2.cpp"<<endl;
    write<<"adding second line";
    write.close();

    // declaring an object of the type ifstream
    ifstream in;
    string st;
    //opening the text file into in
    in.open("text.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0) //end of file.
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}