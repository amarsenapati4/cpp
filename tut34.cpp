#include<iostream>
#include<cmath>
using namespace std;

void prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"It is a Prime Number"<<endl;
    }
    else{
        cout<<"It is not a Prime Number"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cout<<i;
    prime(i);
    }
}