#include<iostream>
using namespace std;

int main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=(5-i) || j>=(3+i))
            {
                cout<<ch;
                j<4?ch++:ch--;
            }
            
            else{
                cout<<" ";
                if(ch==4)
                {
                ch--;
                }
            }
        }
        cout<<endl;
    }
}