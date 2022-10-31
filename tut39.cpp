#include<iostream>
using namespace std;

int countOddEven(int a[],int sizeofarray)
{
    int ceven=0,codd=0;
    for(int i=1;i<=sizeofarray;i++)
    {
        if(a[i]%2==0)
        {
            ceven++;
        }
        else{
            codd++;
        }
    }
    cout<<ceven<<" "<<codd;
}
int main(){
    int n;
    cin>>n;
int arry[n];
for(int i=1;i<=n;i++)
{
    cin>>arry[i];
}
countOddEven(arry,n);
}