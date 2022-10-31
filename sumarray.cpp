#include<iostream>
using namespace std;
 int main()
{
int n,i,sum=0;
cout<<"Enter The Size Of Array"<<" ";
cin>>n;
int Sum_Array[n];
cout<<"Enter Element TO Array"<<" ";
for(i=0;i<n;i++)
{
cin>>Sum_Array[i];
}
cout<<"Elements You Have Enter"<<endl;
for(i=0;i<n;i++)
{
cout<<Sum_Array[i];
}
cout<<"Sum of Elements"<<endl;
for(i=0;i<n;i++)
{
sum+=Sum_Array[i];
}
cout<<sum;
}