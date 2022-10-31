#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
int arr[size];
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
sort(arr,arr+size);
int median=0;
if(size%2!=0)
{
    int j=(size+1)/2;
    median=arr[j-1];
    cout<<median;
}
else{
    int j=(size/2)+1;
    int k=size/2;
    // int r=(j+k)/2;
    cout<<k<<" "<<j<<endl;
    median=(arr[j-1]+arr[k-1])/2;
    cout<<median;
}
// int a,b;
// cin>>a>>b;                                              2 3 4 6 8 9 
// int c=a/b;
// cout<<c;
}