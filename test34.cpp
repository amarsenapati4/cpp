#include<bits/stdc++.h>
using namespace std;
string multiply(string num1, string num2) {
        int temp1=0,temp2=0,temp3=0;
        
        
      for(int i=0;i<num1.length();i++)
      {
        if(num1[i]<='0' && num1[i]>='9')
        {
            temp1=temp1*10+(num1[i]-'0');
            }
      }
        
       for(int i=0;i<num2.length();i++)
       {
           if(num2[i]<='0' && num2[i]>='9')
        {
            temp2=temp2*10+(num2[i]-'0');
            }
       }
        temp3=temp1*temp2;
          string stri = to_string(temp3);
        return stri;
        
    }
int main(){
  string num1,num2;
  cin>>num1>>num2;
  cout<<multiply(num1,num2);

}