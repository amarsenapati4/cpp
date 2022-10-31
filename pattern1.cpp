#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"ENTER A ROW AND COLOUMN"<<endl;
    cin>>k;
    int r=1;
    for (i = 1; i <=k; i++)
    {
        for(j=1;j<=k;j++)
        {
            if(j<=i)
            {
                cout<<j<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}