#include<bits/stdc++.h>
using namespace std;

int sumofdigit(int n)
{
                                                                                //  5 3
if(n==0)
{
    return 0;
}
return (n%10+sumofdigit(n/10));


    
}

int main(){
 int n;
 cin>>n;
// cout<< sumofdigit(n)<<endl;
cout<<n%10;

}