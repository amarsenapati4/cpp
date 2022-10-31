#include<bits/stdc++.h>
using namespace std;
void kthbit2(int n,int k)
{
    if(((n>>(k-1))&1)==1)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
void kthbit1(int n,int k)
{
    if(n&(1<<(k-1))!=0)
    {
      cout<<"yes";
    }
    else
    {
      cout<<"no";
    }
}
int main(){
int num,key,method;
cin>>num>>key>>method;
if(1)
{
   kthbit1(num,key);
   cout<<"Method1 executed";
}
else if(1)
{
    kthbit2(num,key);
    cout<<"Method2 Executed";
}
}