#include<bits/stdc++.h>
using namespace std;
int N;
int fun(int n)
{
    int count=1;
    if(n==0)
    {
    return 0;
    }
  return count+fun(n/10);
   
}
// int fun2(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     fun2(n/2);
//     cout<<(n%2)<<endl;

// }
int main(){
int n;
cin>>n;
cout<<fun(n);
}