#include<bits/stdc++.h>
using namespace std;
int fact(long long int n)
{
    if(n==1 || n==0)
      return 1;
    else
      return n*fact(n-1);
}
    int nCr(long long int n, long long int r){
        // code here
        long long int ans=fact(n)/(fact(r)*fact(n-r));
        return ans;
    }
int main(){
int n,r;
cin>>n>>r;
cout<<nCr(n,r);
}