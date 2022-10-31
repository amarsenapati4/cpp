#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
string str, num;
   int tot, i, j=0;
   int temp=0;
   getline(cin,str);
   tot =str.length();
   for(i=0; i<tot; i++)
   {
      if(str[i]>='0' && str[i]<='9')
      {
         temp=temp*10+(str[i]-'0');
      }
   }
   cout<<temp<<endl;
   j=temp;
   int sum=0;
while(j>0)
{
   sum=sum+j%10;
   j=j/10;
}
cout<<sum;
}
