#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
vector <int> v;
int n;
cin>>n;
for(int i=1;i<n;i++)
{
    v.push_back(i);
}
for(int i=0;i<n;i++)
{
    cout<<v[i]<<endl;
}
}