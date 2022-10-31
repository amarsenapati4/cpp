#include<bits/stdc++.h>
using namespace std;
// bool isprime(int n)
// {
//     if(n==1)
//     {
//         return false;
//     }
//     if(n==2 || n==3)
//     {
//         return true;
//     }
//     if(n%2==0 || n%3==0)
//     {
//         return false;
//     }
//     for(int i=5;i*i<=n;i=i+6)
//     {
//        if(n%i==0 || n%(i+2)==0)
//        {
//         return false;
//        }
//     }
//     return true;
// }
// int main(){
// int i;
// int n;
//  int mult=1;
// cin>>n;
// for(i=1;i<=n;i++)
// {
//     if(isprime(i))
//     {
//         // int x=i;
       
//         if(n%i==0)
//         {
    
//             mult=mult*i;
//             // x=x*i;
//         }
//     }
// }
// cout<<mult;
// }

void printprimefactor(int n)
{
    int mult=1;
    bool f=false;
    if(n<=1)
    {
        return;
    }
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            f=true;
        }
        if(f){
            mult=mult*i;
        }
    }
    // cout<<mult;
    if(n>2)
    {
        mult=mult*n;
        cout<<mult;
    }
}

int main(){
    int n;
    cin>>n;
    printprimefactor(n);
}