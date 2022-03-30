#include <iostream>
#include <fstream>
using namespace std;
/* disk file -> (read data from file) -> input stream -> data input -> program -> data output -> output stream -> (write data to file) -> Disk file.
Stream act as an interface between files and program . they represent the sequence of bytes and deals with flow of data.
ofstream = writing to a file
ifstream = reading for a file
fstream = reading/writing
Opening a file meathods :- 1. open() or 2. constructor
ios::app - append , write all output the end of the file
ios::ate - open with marker at the end of the file. but data can be written anywhere in the file
ios::in/ ios::out - (the default of ifstream and ofstream)
ios::nocreate / ios::noreplace - open only if the file exists/doesn't exist
ios::trunc - open an empty file , discard the files contents if it exists
ios::binary - open a binary file (default is textual) . read and write data in binary format
ios::in - input , open a file for input
ios::out - output , open a file for output

STREAM STATE MEMBER FUNCTION
eof() - used to check the end of file character
fail() - used to check the status of file at opening for I/O
bad() - used to check whether invalid file operations or unrecoverable error.
good() - used to check whether the previous file operation has been successful

A sequential file has to be accessed in the same order the file was written. eg:- cassette tapes
get() :- is used to read an alphanumeric character from a file.
put() :- is used to write a character to a specified file or a specified output stream.
getline() :- reads the character from input stream and puts them in array.


*/
class student{
    char name[10];
    int rn;
    public:
    void getdata(){
        cout<<"enter name ";
        cin>>name;
        cout<<"enter roll no ";
        cin>>rn;
    }
    void showdata(){
        cout<<"name of student is "<<name<<endl;
        cout<<" roll no. is "<<rn<<endl;
    }
};
int main()
{ 
 //Opening a file
 //1. constructor
 ofstream obj1("text.txt",ios::out | ios::trunc); // | means or
 //2. open()
 //ofstream obj2;
 //obj2.open("text.txt",ios::out);
 string str;
 getline(cin , str);
 obj1<<str<<endl; //<<
 int id;
 cin>>id;
 obj1<<id<<endl;
 obj1.close();
 ifstream objread;
 objread.open("text.txt", ios::in);
 objread>>str;
 objread>>id;
 cout<<"Name "<<str<<endl;
 cout<<"id "<<id<<endl;  //id is showing 0
 objread.close();

 char c;
 cin>>c;
 ofstream fout("text.txt",ios::out);
 while (c!='x')
 {
     fout.put(c);
     cin>>c;
 }
 fout.close();
 ifstream finn("text.txt",ios::in);
 char j;
 finn.get(j);
 while (!finn.eof())
 {
     cout<<j;
     finn.get(j);
 }
 cout<<endl;
 finn.close();
 
 //Moving within the file
 // seekg()/seekp() - moving the reading(get) to a specified location/ moves(put) pointer to a specifies location.
 // - two parameters: offset and anchor
 //tellg()/tellp() - getting the position of the reading (get)/writing(put) marker
 //eg:- seekg(1,ios::beg); it means pointer will move 1 positon from beggining
 //seekg(-2,ios::end); pointer will move 2 position backward from end
 
 fstream fin;
 char ch;
 fin.open("text.txt",ios::in|ios::out);
 fin<<"c++ programming"<<endl;;
 fin.seekg(5,ios::beg);
 fin.get(ch); //r
 cout<<ch<<endl;
 fin.seekp(1,ios::cur);
 fin.put('z');
 cout<<"get pointer is at "<<fin.tellg()<<endl; //9
 cout<<"put pointer is at " <<fin.tellp()<<endl; //9
 fin.close();

//Binary file operations (ios::binary)
//to read and write a or on to a binary file, as the case may be blocks of data are
//accessed through the use of c++ read() and write() .
//syntax:- write((char*)&obj,sizeof(obj)); , read((char*)&obj,sizeof(obj)); mandatory to be typecasted in char only.
 student stu;
 fstream file;
 file.open("text.txt",ios::binary|ios::out);
 for (int i = 1; i <= 3; i++)
 {
     cout<<"student datails "<<endl;
     stu.getdata();
     file.write((char*)&stu,sizeof(stu));
 }
 file.close();
 file.open("text.txt",ios::binary|ios::in);
 while (!file.eof())
 {
     cout<<"student is"<<endl;
     file.read((char*)&stu,sizeof(stu));
     stu.showdata();
 }
 
 
 return 0;
}