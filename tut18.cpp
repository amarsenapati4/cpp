#include<iostream>
using namespace std;
 int main()
 {
    int n,i;
    int arr[n];
    cout<<"Enter Array Size "<<" ";
    cin>>n;
    cout<<"Enter Array Data"<<" ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    for(i=(n-1);i>=0;i--)
    {
        cout<<arr[i];
    }

    
 }