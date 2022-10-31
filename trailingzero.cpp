#include<bits/stdc++.h>
using namespace std;
int main(){
long long int i,fact=1,n,count=0;
cin>>n;
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
cout<<fact<<endl;
long long int rem=0;
while(fact>0)
{
    rem=fact%10;
    fact=fact/10;
    if(rem==0)
    {
        count++;
    }
}
cout<<count;
}