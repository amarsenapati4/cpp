#include<bits/stdc++.h>
using namespace std;

struct Data
{
    /* data */
    int x;
    int y;
    void setInput(int *a,int *b)
    {
        x=*a;
        y=*b;
    }
    void getOutput()
    {
        cout<<x<<endl;
        cout<<y;
    }
}__attribute__((packed));

int main(){
    Data D;
    int n1,n2;
    cin>>n1>>n2;
    int *ptr1=&n1;
    int *pt2=&n2;
     
    D.setInput(&n1,&n2);
    D.getOutput();
cout<<"_____________"<<endl;
cout<<&n1<<" "<<&n2<<endl;;
cout<<sizeof(Data);

}