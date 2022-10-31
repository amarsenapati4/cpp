#include<bits/stdc++.h>
using namespace std;

int insert(int arr[],int n,int element,int pos,int capcity)
{
    int u=-1;
    if(n==capcity){
        return n ;
    }
    int idx=pos-1;
    int i;
    for(i=n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[idx]=element;
    return (n+1);
}
int main(){
    cout<<"Enter Size"<<endl;
    int n;
    cin>>n;
int arr[n];
int i;
for(i=0;i<n;i++)
{
    cout<<"Enter 1 for continue "<<endl;
    int u;
    cin>>u;
    if(u==1)
    {
    cin>>arr[i];
    }
    else{
        break;
    }
}
cout<<endl;
cout<<"Enter Element"<<endl;
int element;

cin>>element;
cout<<"Enter position"<<endl;
int pos;
cin>>pos;
int capacity=arr[n]/arr[0];
for(i=0;i<insert(arr,n,element,pos,capacity);i++)
{
    cout<<arr[i]<<endl;
}

}