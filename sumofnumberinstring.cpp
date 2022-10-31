#include<bits/stdc++.h>
using namespace std;
class sum{
public:
string findsum(string str,string str1)
{
    int tot=str.length();
    // int tot1=str1.length();
    int sum=0;
            int temp=0;
            int local=0;
    for(int i=0;i<tot;i++)
    {

        if(str[i]>='0' && str[i]<='9' && i<tot)
        {
            temp=temp*10+(str[i]-'0');
        }
        
    }
    for(int i=0;i<str1.length();i++)
    {

        if(str1[i]>='0' && str1[i]<='9' && i<str1.length())
        {
            local=local*10+(str1[i]-'0');
        }
        
    }
    string stri = to_string(local*temp);
 return stri;
}
};
int main(){
    sum s;
    string str1,str2;
cin>>str1>>str2;
    cout<<s.findsum(str1,str2);


}