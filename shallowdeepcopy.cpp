#include<bits/stdc++.h>
using namespace std;

class dcopy{
    int *p;
public:
dcopy(int y){
    p=new int(y);
}
dcopy(const dcopy &k)
{
    int value=*(k.p);
    p=new int(value);

}
void set(int y)
{
    *p=y;
}
void get(){
    cout<<*p<<" ";
}
};
class scopy{
int *ptr;
public:
scopy(int n){
ptr=new int(n);
}
void set(int n)
{
    *ptr=n;
}
void get(){
    cout<<*ptr<<" ";
}
};
int main(){
scopy t1(10);
scopy t2(t1);
t2.set(50);
t2.get();
t1.get();
cout<<endl;
dcopy t3(50);
dcopy t4(t3);

t4.set(100);
t3.get();
t4.get();
}