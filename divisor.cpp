#include<bits/stdc++.h>
using namespace std;
void divisor(int n)
{
    int i;
    for(i=1;i*i<=n;i++)
    {
     if(n%i==0)
     {
        cout<<i<<" ";
     }
    }
}
int main(){
int n;
cin>>n;
divisor(n);
}