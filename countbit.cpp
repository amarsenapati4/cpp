#include<bits/stdc++.h>
using namespace std;
// brian algorithim
int countbit(int n)
{
    
    int res =0,i,ans;
     while(n>0)
        {
        n=(n&(n-1));
        res++;
        }
        return res;
   
}

int countNbits(int n)
{
    int ans=0,i;
    for(i=1;i<=n;i++)
        {
            ans=ans+countbit(i);
        }
        return ans;
}
int main(){
int n;
cin>>n;
cout<<countNbits(n);
}