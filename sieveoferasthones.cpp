#include<bits/stdc++.h>
#include<vector>
using namespace std;


int soe(int n)
{
vector <bool> isprime(n+1,true);
int i,j,count=0;
isprime[0]=isprime[1]=false;
for(i=2;i*i<=n;i++)
{
    if(isprime[i])
    {

       for(j=2*i;j<=n;j=j+i)
       {
       
        isprime[j]=false;
       }
    }
}
for(i=1;i<=n;i++)
{
    if(isprime[i])
    {
        count++;
        cout<<i<<endl;
    }
}
return count;
}

int main(){
int num;
cin>>num;
cout<<soe(num);
}