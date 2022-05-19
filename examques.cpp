#include <iostream>
/*

*/

using namespace std;
   class B{
       int b;
       public:
       B(){}
       B(int i){
           b = i;
       }
      int show(){
          return b;
      }
  };
   class C{
       B d;
       public:
       C(int i){
           d = B(i);
       }
        void show(){
          C c(10);
          cout<<c.d.show();
      }
  };

 void print(char *a)
 {
     cout<<a<<endl;
 }

int main()
{
   int array[] = {10,20,30};
   cout<< -2[array]; //-30 doubt
    const char *a = "hello world";
    cout<<endl;
  print(const_cast<char *> (a));
C c(1);
 c.show();  //10

    return 0;
}