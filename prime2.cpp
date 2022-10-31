#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
         return false;
    }
    return true;
}

int main()
{
int a,b;
cin>>a>>b;
for(int i=a;i<=b;i++)
{
    if(prime(i)==true)
      {
        cout<<i<<" ";
      }
}
}