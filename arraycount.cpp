#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter Size Of Array"<<" ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements Of Array"<<endl;
    for(i=0;i<n;i++)
    {
     cin>>A[i];
    }
    int pcount=0;
    int ncount=0;
    for(auto x: A)
    {
        if(x<0)
        {
            ncount++;
        }
        else if(x>0)
        {
         pcount++;
        }
    }
    cout<<"Negative count"<<" "<<ncount<<" "<<"Positive count"<<" "<<pcount;
}