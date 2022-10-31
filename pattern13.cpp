#include<bits/stdc++.h>
using namespace std;
int main(){

for(int i=1;i<=10;i++)
{
    for(int j=1;j<=10;j++)
    {
        if(j<=5-i || j>=4+i)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}