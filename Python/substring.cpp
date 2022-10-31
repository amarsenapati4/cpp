#include<bits/stdc++.h>
using namespace std;

void substring(string str,int index=0,string curr="")
{
if(index==str.size())
{
    cout<<curr<<endl;
    return;
}
substring(str,index+1,curr+str[index]);
substring(str,index+1,curr);
}
int main(){
string str;
cin>>str;
substring(str);
}