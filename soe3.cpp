#include<bits/stdc++.h>
#include<vector>
using namespace std;
// int soe(int n)
// {
//     vector <bool> isprime(n+1,true);
//     isprime[0]=isprime[1]=false;
//     int i,j;
//     for(i=2;i*i<=n;i++)
//     {
//         if(isprime[i])
//         {
//             for(j=2*i;j<=n;j=j+i)
//             {
//                 isprime[j]=false;
//             }
//         }
//     }

//     for(i=1;i<=n;i++)
//     {
//         if(isprime[i])
//         {
//             cout<<i<<endl;
//         }
//     }
// }

// int main(){
// int num;
// cin>>num;
// soe(num);
// }

int main()
{
    int x,y;
    cin>>x>>y;
    int r=0;
    r=x|y;
    cout<<r<<endl;
}