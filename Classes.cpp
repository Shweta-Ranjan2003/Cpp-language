#include <iostream>
/*
Even if we dont write private program will run same because by default members are private in class
*/

using namespace std;

class animal //consist of variables and functions which are also called class members.
{
  private:  // private access modifier can only be used inside the class.
  char lifespan , origin; //data members
  public:  //public access modifier , can be accessed both inside and outside of the class.
  int legs , teeths;
   string sound;
  void setInfo(char age , char birthplace); //Declaration of member function
  void printInfo(){
  cout<<"private information: lifespan is "<<lifespan<<endl;
  cout<<"And origin is "<<origin<<endl;
  }
  
};
void animal :: setInfo(char age , char birthplace)  //:: scope resolution operator (used here because
                                                  //function setinfo is defined outside of the class animal)
{
  lifespan = age;
  origin = birthplace; 
}

class student
{
   private:
   int marks;
   char grade;
   public:
   int rank;
   char sub;
   void setInformation1(int r , char s)
   {
     marks = r;
     grade = s;
   };
   void printInformation1(){
       cout<<"Marks of student is "<<marks<<endl;
       cout<<"grade of student is "<<grade<<endl;
   }
   void setInformation2(int r , char s);
};
 void student :: setInformation2(int r , char s)
   {
       rank = r;
       sub = s;
   }
int main()
{
      animal dog , cat;  //objects of class animal.
      //dog.lifespan = '8'; this will throw error as lifespan is  private.
      dog.legs=4;
      dog.teeths=32;
       dog.sound="bark";    
      cout<<"dog have "<<dog.legs<<" legs"<<endl;
      cout<<"dog have "<<dog.teeths<<" teeths"<<endl;
       cout<<"dog have "<<dog.sound<<" sound"<<endl;
      dog.setInfo('8','A');
      dog.printInfo();


      cat.legs=4;
      cat.teeths=28;
       cat.sound="meow";    
      cout<<"cat have "<<cat.legs<<" legs"<<endl;
      cout<<"cat have "<<cat.teeths<<" teeths"<<endl;
       cout<<"cat have "<<cat.sound<<" sound"<<endl;
      cat.setInfo('6','E');
      cat.printInfo();

    //**********Student*********
    student shweta;
    shweta.rank=1;
    shweta.sub='M';
    cout<<"Shweta's rank in class is "<<shweta.rank<<endl;
    cout<<"Shweta's powerfull subject is "<<shweta.sub<<endl;
    shweta.setInformation2(2,'C');
    cout<<"Shweta's rank in class is "<<shweta.rank<<endl;
    cout<<"Shweta's powerfull subject is "<<shweta.sub<<endl;

    shweta.setInformation1(100,'A');
    shweta.printInformation1();
    return 0;
}