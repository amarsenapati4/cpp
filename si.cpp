#include<iostream>
#include<string>
using namespace std;
 
 template <typename T>

 T addme(T a,T b)
 {
   T c;
   c=a+b;
   cout<<c<<endl;
 }
 int main()
 {
   int a,b;
   cin>>a>>b;
    string str1,str2;
    cin>>str1>>str2;
    addme(str1,str2);
    addme(a,b);

 }