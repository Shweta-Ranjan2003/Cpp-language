#include <iostream>
#include <string>
/*

*/

using namespace std;

int main()
{
    // string s1("man");
    // string s2 = "beast";
    // string s3;
    // s3 = s1;
    // cout<<s3<<endl;
    // s3 = "neither" + s1 + "nor";
    // s3 += s2; //s3 = s3+s2;
    // cout<<s3<<endl;
    // s1.swap(s2); //s1 is now same as s2
    // cout<<s1<<"nor"<<s2<<endl;
      /*
    string s1("12345");
    string s2("abcde");
    s1.insert(0,s2); //abcde12345
    cout<<s1<<endl;
    s1.erase(0,5);
    cout<<s1<<endl; //12345  //(0,5) means erase 5 character from 0's place
    s2.replace(1,3,s1);
    cout<<s2<<endl; //a12345e //it means from 1's to 3rd character replace it by s1
    s2.append(s1,2,3); //it means add s1's 3 character from its 2nd's place at the end of s2.
    cout<<s2<<endl; //a12345e345  

    string s3 = "12345";
    string s4 = "abcde";
    s3.append(s4);
    cout<<s3<<endl; //12345abcde
    s3.append(s4,1,2);
    cout<<s3<<endl; //12345abcdebc

    string str = "welcome";
    cout<<str.size()<<endl; //7
    cout<<str.length()<<endl; //7
    cout<<str.capacity()<<endl; //15
    cout<<str.max_size()<<endl; //2147483647
    cout<<sizeof(str)<<endl; //24
    cout<<(str.empty()?"yes":"no")<<endl; //no

    s3 = "hello";
    s4 = "Hello";
    int x = s3.compare(s4);
    cout<<x<<endl; //1 because s3>s4 as h is 104 H is 72
    s3 = "XYZ";
    s4 = "ABC";
    x = s4.compare(s3);
    cout<<x<<endl; //A<X so s4<s3   -> -1

    s1 = "bcme";
    s2 = "abcrome";
    cout<<s1.compare(s2)<<endl; //1
     cout<<s1.compare(2,2,s2,5,2)<<endl; //0 doubt
     */
    string s1 = "arlcomme";
    string s2 = "wearomea";
    cout<<s1.find("lc")<<endl; //2
    cout<<s1.rfind("lc")<<endl; //2
    cout<<s2.find_last_of('e')<<endl; //6
    cout<<s2.find_first_of('e')<<endl; //1
    s2=s1.substr(0,2);
    cout<<s2; //ar    s2 will store 2 character of s1 from s1's 0th position



    return 0;
}