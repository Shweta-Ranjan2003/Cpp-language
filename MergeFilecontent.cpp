#include <iostream>
#include <fstream>
using namespace std;
class doctor{
   public:
   int doc_id;
   string doc_name;
   string doc_specialization;
   int doc_salary;

};
int main()
{    int n;
     cout<<"Enter no. of doctors: "<<endl;
     cin>>n;
     doctor cardiologists;

ofstream obj2("record2.txt",ios::out| ios:: trunc);
ofstream obj1("record1.txt",ios::out | ios::trunc);
for (int i = 1; i <= n; i++)
{
    cout<<"Enter your id: "<<endl;
       cin>>cardiologists.doc_id;
       getchar();
       obj1<<"Doctor id :"<<cardiologists.doc_id<<endl;
       cout<<"Enter name: "<<endl;
       getline(cin,cardiologists.doc_name);
       obj1<<"Doctor name :"<<cardiologists.doc_name<<endl;
       cout<<"Enter your specialization: "<<endl;
       getline(cin,cardiologists.doc_specialization);
       obj1<<"Doctor specialization :"<<cardiologists.doc_specialization<<endl;
       cout<<"Enter your salary: "<<endl;
       cin>>cardiologists.doc_salary;
       obj1<<"Doctor salary :"<<cardiologists.doc_salary<<endl;
       if (cardiologists.doc_salary>80000)
       {
           obj2<<"Doctor's who have salary more than INR 80000"<<endl;
       obj2<<"Doctor id :"<<cardiologists.doc_id<<endl;
       obj2<<"Doctor name :"<<cardiologists.doc_name<<endl;
       obj2<<"Doctor specialization :"<<cardiologists.doc_specialization<<endl;
       obj2<<"Doctor salary :"<<cardiologists.doc_salary<<endl;
       }

}
 obj1.close();
 obj2.close();

ofstream obj3("finalrecord.txt",ios::out| ios:: trunc);
ifstream obj1read("record1.txt",ios::in);
ifstream obj2read("record2.txt",ios::in);
char j;
   obj1read.get(j);
   while (!obj1read.eof())
   {
       obj3.put(j);
       obj1read.get(j);
   }
   obj3<<endl;
   char k;
   obj2read.get(k);
   while (!obj2read.eof())
   {
       obj3.put(k);
       obj2read.get(k);
   }
   obj3<<endl;
   obj1read.close();
   obj2read.close();
   obj3.close();
   ifstream obj3read("finalrecord.txt",ios::in);
   char r;
   obj3read.get(r);
   while (!obj3read.eof())
   {
       cout<<r;
       obj3read.get(r);
   }
   obj3read.close();
return 0;
}