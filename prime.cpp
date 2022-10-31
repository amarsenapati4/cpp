#include<iostream>
#include<cmath>
using namespace std;

void prime(int num1,int num2)
{
    int i,j;
    for(i=num1;i<=num2;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
               break;
            
        }
        if(i==j)
            {
              cout<<i<<endl;
            
            }
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    prime(n,k);
}
