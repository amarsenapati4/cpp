#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
vector<vector <int>> vect(n,vector<int>(n,0));
vector<vector<int>> ans(n,vector<int>(n,0));

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        int t;
        cin>>t;
        vect[i][j]=t;
    }
}

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cout<<vect[i][j]<<" ";
    }
    cout<<endl;
}

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       ans[i][j]=vect[j][i];
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}