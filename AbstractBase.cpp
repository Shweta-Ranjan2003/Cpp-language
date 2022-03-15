#include <iostream>
/*
Pure virtual function is a function that doesn’t perform any operation and the function is declared 
by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.

Abstract base class is a class that has at least one pure virtual function in its body. 
The classes which are inheriting the base class must need to override the virtual function 
of the abstract class otherwise compiler will throw an error.
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
        virtual void display()=0;   //do-nothing function -> pure virtual function.
        // pure virtual function void “display” which is declared by 0. 
        //The main thing to note here is that as the “display” function is a pure virtual function 
        //it is compulsory to redefine it in the derived classes.
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
      void display(){
       cout<<"This is an amazing text tutorial with title "<<title<<endl;
       cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
       cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
          }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    //if we do not make virtual display function as pure virtual function then also if we do not
    //re-define display func in derived class and call it then virtual function of base class will invoke
    //but if we make it pure virtual function then it is compulsory for us to redefine it in base class.
    return 0;
}