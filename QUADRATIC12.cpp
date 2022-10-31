#include<bits/stdc++.h>
using namespace std;
template <typename T>
T getroot(T a,T b,T c)
{
T d=0;
d=(b*b)-(4*a*c);

if(d>0)
{
    cout<<"Real and distinct root"<<endl;
}
else if(d==0)
{
    cout<<"Roots are equal"<<endl;

}
else
{
    cout<<"Roots are imaginary"<<endl;
}
}

int main(){
int a,b,c;
cin>>a>>b>>c;
getroot(a,b,c);
}