#include<bits/stdc++.h>
using namespace std;
int rotate(int *arr,int n,int k)
{
int temp[k];
for(int i=0;i<k;i++)
{
    temp[i]=arr[i];
}
for(int i=0;i<n;i++)
{
    arr[i]=arr[i+k];
}
for(int i=0;i<k;i++)
{
    arr[n-k+i]=temp[i];
    
}
return n;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     int k;
     cin>>k;
     n=rotate(arr,n,k);
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }
}