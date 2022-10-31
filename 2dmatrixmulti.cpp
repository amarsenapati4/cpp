#include<iostream>
using namespace std;
 int main()
{
  int i,j,n,m,n1,m1;
  cout<<"Enter Row And Coloumn of first matrices"<<endl;
  cin>>n>>m;
  cout<<"Enter Row And Coloumn of 2nd matrices"<<endl;
  cin>>n1>>m1;
  if (m!=n1)
  {
   cout<<"Matrix cannnot be multiplied"<<endl;
   return 0;
  }
  
  int arr1[n][m],arr2[n1][m1],sum,arr3[n][m];
  cout<<"Enter Array A"<<endl;
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=m;j++)
   {
      cin>>arr1[i][j];
   }
  }
  cout<<"Enter Array B"<<endl;
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=m;j++)
   {
      cin>>arr2[i][j];
   }
  }
   for(i=1;i<=n;i++)
  {
   for(j=1;j<=m;j++)
   {
      sum=0;
      for(int k=1;k<=m;k++)
      {
      sum=sum+(arr1[i][k]*arr2[k][j]);
      arr3[i][j]=sum;
      }
   }
  }
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=m;j++)
   {
      cout<<arr3[i][j]<<" ";
   }

}
}
  

