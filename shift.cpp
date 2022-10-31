#include<bits/stdc++.h>
using namespace std;
int binary(uint32_t n)
{
    uint32_t r=0,temp=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r==1)
        {
            temp++;
        }
    }
    cout<<temp;
}
int main(){
uint32_t n;
cin>>n;
binary(n);
}