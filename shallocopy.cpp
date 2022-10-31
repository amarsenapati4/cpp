#include<bits/stdc++.h>
using namespace std;

class shallow{
int *ptr;
public:
shallow(int x)
{
    ptr=new int(x);
}
shallow(const shallow &s1)
{
     int value= *(s1.ptr);
     ptr=new int(value);
}
void set(int x)
{
    *ptr=x;
}
void get()
{
    cout<<*ptr<<" ";
}
};
int main(){
shallow t1(10);
shallow t2(t1);
t2.set(20);
t1.get();
t2.get();

}