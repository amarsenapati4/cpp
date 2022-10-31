#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int n,flag=0;
cin>>n;
int i;
if(n==1)
{
    flag=1;
}
for(i=2;i*i<=n;i++)
{
   
    while(n%i==0)
    {
        f=true;
        break;
        
    }
}
if(flag==0)
{
    cout<<"prime";
}
else
{
    cout<<"not prime";
}
return 0;
}