#include<bits/stdc++.h>
using namespace std;

// int gcd(int a,int b)
// {
//     if(b==0)
//       return a;
//     else
//        return gcd(b,a%b);
// }

// void LCM(int a,int b)
// {
//     int ans=(a*b)/gcd(a,b);
//     cout<<ans;
// }
// int main(){
// int num1,num2;
// cin>>num1>>num2;
// LCM(num1,num2);
// }
int main(){
    int a,b;
    cin>>a>>b;
    int res=min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
    cout<<(a*b)/res;
}