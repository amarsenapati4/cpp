#include<bits/stdc++.h>
using namespace std;
int palindrome(int n,int ans)
{
    if(n==0)
    {
        return ans;
    }
    int r=n%10;
    ans=ans*10+r;
    return palindrome(n/10,ans);
    

}
int main(){
int num;
cin>>num;
int ans=palindrome(num,0);
if(ans==num)
{
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}