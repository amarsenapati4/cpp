#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
   int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int res=-1;
        // n= sizeof(arr[n]) / sizeof(arr[0]);
      sort(arr,arr+n);
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<endl;
        // }
     for(int i=0;i<n;i++)
     {
        if(arr[i]>x)
        {
           res=arr[i];
           break;
        }
     }
     return res;
    }
int main(){
int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
int x;
cin>>x;
cout<<immediateSmaller(arr,size,x);
}