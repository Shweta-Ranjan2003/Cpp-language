#include <iostream>
#include <string>
using namespace std;
void toupper(string &s){
    for(int i=0;i<s.length();i++){
        s[i]=s[i]-32;
    }
}
void tolower(string &s){
    for(int i=0;i<s.length();i++){
        s[i]=s[i]+32;
    }
}

bool ispalindrome(string s){
//  for(int i=0; i<s.length()/2 ; i++){ // m a d d a m
//     if(s[i]==s[s.length()-i-1]) continue;
//     else return false;
//  }
//  return true;

int left = 0;
int right = s.length()-1;
while(left<=right){
    if(s[left]==s[right]){
        left++;
        right--;
    }
    else return false;
}
return true;
}

void reverse(string &s){ //R E V E R S E
    for(int i=0; i<s.length()/2; i++){
        swap(s[i], s[s.length()-i-1]);
    }
}

void spaceremove(string &str){
   int count = 0;
for (int i = 0; i<str[i]; i++)
if (str[i] != ' ')
str[count++] = str[i];
str[count] = '\0';
}

 char findTheDifference(string s, string t) {
      int arr1[26]={0};
      int arr2[26]={0};
      for(int i=0;i<s.length();i++){
          arr1[s[i]-'a']++;
      }
      for(int i=0;i<t.length();i++){
          arr2[t[i]-'a']++;
      }
      for(int i=0;i<26;i++){
          if(arr1[i]!=arr2[i]){
          return char(i+32) ;
      }
    }
    return t[0];
    }
  void removeStars(string s) {
        for(int i=0;i<s.length()-1;i++){
            if(s[i+1]==42){
                s.erase(i,2);
                i=i-2;
                if(i<0) i=-1;
            }
        }
        cout<<s;
    }
int main()
{ 
//  string s1="small";
//  toupper(s1);
//  cout<<s1<<endl;

//  string s2="CAPITAL";
//  tolower(s2);
//  cout<<s2<<endl;

//  string s3="maddam";
//  cout<<ispalindrome(s3)<<endl;

//  string s4="reverse";
//  reverse(s4);
//  cout<<s4<<endl;

//  string s5="  space  ";
//  spaceremove(s5); //doubt
//  cout<<s5<<endl; //spacee
 
//  string first = "aabb";
//  string second = "aabbe";
//  char a= findTheDifference(first,second);
//  cout<<a<<endl;
 string star = "u*ensso****x*q";
 removeStars(star);
 return 0;
}