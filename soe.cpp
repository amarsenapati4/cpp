#include<bits/stdc++.h>
using namespace std;
int soe(int n)
{
    bool arr[n];
    int i,j;
    for(i=0;i<=n+1;i++)
    {
        arr[i]=true;
    }
    arr[0]=arr[1]=false;
    for(i=2;i*i<=n;i++)
    {
        if(arr[i])
        {
            for(j=i*i;j<=n;j=j+i)
            {
                arr[j]=false;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i])
        {
            cout<<i<<" ";
        }
    }
    // cout<<arr[3]<<endl;

}
int main(){
int n;
cin>>n;
soe(n);
}