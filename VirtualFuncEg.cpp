#include <iostream>
/*
Rules for virtual functions
1.They cannot be static
2.They are accessed by object pointers
3.Virtual functions can be a friend of another class
4.A virtual function in the base class might not be used.
5.If a virtual function is defined in a base class, there is no necessity of 
redefining it in the derived class
*/

using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
         virtual void display(){
            cout<<"base class virtual display function invoked"<<endl;
            } //if we do not re-define display function in derived class and call it using a base class
            //pointer pointing to that derived class then in absence of re-defination of virtual function
            //this virtual function will invoke.
};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};  
class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
    //  void display(){
    //   cout<<"This is an amazing text tutorial with title "<<title<<endl;
    //   cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
    //   cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
    //      }
};

int main()
{
     string title;
    float rating, vlen;
    int words;

    // for Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.99;
    CWHVideo djVideo(title, rating, vlen);

    // for Text
    title = "Django tutorial Text";
    words = 433;
    rating = 5.00;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;  //pointer of base class pointing to derived class object    
    tuts[1] = &djText;  //pointer of base class pointing to derived class object  

    tuts[0]->display();  //it will run display of derived class CWHVideo because 
                         //in base class display we added virtual keyword
    tuts[1]->display();  //display of CWHText will be invoked.
    return 0;
}