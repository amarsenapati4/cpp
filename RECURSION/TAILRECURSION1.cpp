#include<bits/stdc++.h>
using namespace std;
int sum(int n,int k)
{
    if(n==1)
    {
        return k;
    }
    sum(n-1,k+n);
}
int main(){
int n,k;
cin>>n>>k;
cout<<sum(n,k);

}