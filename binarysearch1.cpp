#include<bits/stdc++.h>
using namespace std;
int binarysearch(string arr[],int n,string key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    string key;
    cin>>key;
    cout<<"Found at index number"<<" "<<binarysearch(arr,n,key);

}