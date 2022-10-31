#include<bits/stdc++.h>
using namespace std;

string reverseword(string str)
{
   reverse(str.begin(),str.end());
   cout<<str;

}
int main(){
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    cout<<reverseword(s)<<endl;
}
}