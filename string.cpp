#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int rev(int num1)
{
    int sum=0,n;
    while (n>0)
    {
        n=num1%10;
        num1=num1/10;
        sum=sum*10+n;
    }
    return sum;
}
int main()
{
int n1;
 cout<<"Enter Number"<<endl;
 cin>>n1;
 cout<<"Reverse Number is "<<" "<<rev(n1);

}