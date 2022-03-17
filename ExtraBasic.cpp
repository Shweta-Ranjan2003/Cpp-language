#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
                                                  //Ascii value
     char a;
     cin>>a;
     cout<<(int)a<<endl; //print the ascii value of that character. Internally ascii value is stored of character
     int b = 97;
     cout <<(char)b<<endl; //a
     cout <<'b'+1<<endl; //99
     cout <<'b'+'c'<<endl; //197
     cout <<(' '+' ')<<endl; //64 because space is 32 .
     cout <<(char)(' '+' ')<<endl; //@
      int arr[]={83,72,69,87,84,65,32,78,65,72,73,32,83,72,87,69,84,65};
     for(char c: arr){
         cout<<c; //SHEWTA NAHI SHWETA  32 is for space in ascii
     }

                                      // Precedence in calculation
    // character<int<long int<long long int< float <double
    char x='@';
    int y = 8;
    cout << x+y<<endl; //72 because @ is 64 in ascii and because y is int type and int has higher precendence  than char so output will be in int.
    cout<<7/2<<endl; //3 because both are int so output will be int.
    cout<<7/2.0<<endl; //now 3.5 is in higher data type so calculation will be in that.
    double p = 7/2;
    cout<< p << endl; //3 because calculation took place in int so output will be 3.

                                           //Overflow
    // -10^9 << int << 10^9
    // -10^12 << int << 10^12
    // -10^18 << int << 10^18

    // int a = 100000;
    // int b = 100000;
    // int c = a*b;
    // cout << c <<endl; //error because a*b will give result in 10^10 .
     long long int q = 100000;
     long long int r = 100000;
     long long int t = q*r;
     cout << t <<endl; 

     int a = 100000;
     int b = 100000;
     long long int c = a*1LL*b; //1LL (long long) will make whole calculation in long long because of its higher data type precedence and output will be correct.
     cout << c <<endl;
    //why not use double in place of long long int becuase double will store higher no. but at the cost of the accuracy of precision so prefer using long long int
    // unsigned long long will store exact integers whereas double stores a mantissa (with limited 52-bit precision) and an exponent. 

                                                 //STRINGS
     string str = "Hello";
     string str2 = "World";
     string result = str + str2;
     cout << result <<endl;
     cout<< result[5]<<endl;
     str[2] = 'm';
     cout<<str<<endl;
     if(str == str2)
     {
         cout << "matched"<<endl;
     }
     else if (str != str2)
     {
         cout << "not matched"<<endl;
     }
     cout<<result.size()<<endl;
     string write;
     getline(cin , write); //it will take spaces also as a input in string
     cout<<write<<endl;

     int i;
     cin>>i;
     cin.ignore(); // or  getchar(); ,ignore or clear one or more characters from the input buffer.
     while (i--)
     {
         string s;
         getline(cin , s);
         cout << s<<endl;
     }
     //REVERSING STRING
    //1 meathod
     string str3;
     cin>>str3;
     string str3_rev;
     string str3_rev2;
     for (int i = str3.size()-1; i >= 0; i--)
     {
         str3_rev.push_back(str3[i]);  //Time complexity = O(1);
     }
     cout<<str3_rev<<endl;
     //2 meathod
     for (int i=0; i<str3.size(); i++)
     {
         str3_rev2 = str3[i]+str3_rev2; //Time complexity = O(s.size());
     }
     cout<<str3_rev2<<endl;
     //Because of time complexity prefer using pushback function.

                                                   //Array
     //locally you can initialize an array of size around 10^5
     //But globally you can initialize array of size upto 10^7
     //Because when we declare array in main or any other function then it gets store in stack which has a memory limit but when we declare array globally then it gets stored in data segment which does not have any memory limit as such. 
     //when declare an array[n] globally then make sure n is declared as constant. 
                                           //Pointers and double pointer
     int ptrarray[10]={0,1,2,3,4,5,6,7,8,9};
     cout<<ptrarray<<endl; //name of array itself is a address of its first element
     cout<<*ptrarray<<endl; //ptrarray<->&ptrarray[0] and *ptrarray<->*(ptrarray[0])
     cout<<*(ptrarray+1)<<endl;
     cout<<ptrarray[1]<<endl;
     //*(ptrarray+1) = ptrarray[1] because when we add 1 to a int pointer it then points to memory location of 4bytes after current
     int var = 4;
     int *Dptr = &var;
     int **pp = &Dptr; //**pp means pointer to a pointer
     cout<<Dptr<<endl; //address of var
     cout<<*Dptr<<endl; //value of var
     cout<<&Dptr<<endl; //address of Dptr
     cout<<pp<<endl; //address of Dptr
     cout<<*pp<<endl; //address of var
     cout<<**pp<<endl; //value of var
    */


    return 0;
}