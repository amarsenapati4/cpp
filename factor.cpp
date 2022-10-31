#include<iostream>
using namespace std;

long long fact(long long num)
{
    long long i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
   return f;
}

int main()
{
    long long n,combination=0,r;
    cin>>n>>r;
    combination=fact(n)/(fact(r)*fact(n-r));
    cout<<combination;
}
