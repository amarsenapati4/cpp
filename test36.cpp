#include<bits/stdc++.h>
using namespace std;
     void printArrayRecursively(int arr[],int n)
    {
       //Your code here
       //Use recursion to print array elements from start to end
       if(n==0)
       {
        return ;
       }
      
       printArrayRecursively(arr,n-1);
       cout<<arr[n-1]<<endl;
    }
int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
printArrayRecursively(arr,n);

}