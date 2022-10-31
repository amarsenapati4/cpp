#include<bits/stdc++.h>
using namespace std;
class MyHash{
public:
int BUCKET;
list<int> *table;
MyHash(int b)
{
    BUCKET=b;
    table=new list<int>[BUCKET];
}
void insert(int k)
{
    int i=k%BUCKET;
    table[i].push_back(k);
}
void del(int k)
{
int i=k%BUCKET;
table[i].remove(k);
}
bool search(int k)
{
    int i=k%BUCKET;
    for(auto x:table[i])
    {
        if(x==k)
        {
            return true;
        }
    }
    return false;
}
};
int main(){
    int n;
    cout<<"Enter a Prime Number for Bucket Size"<<endl;
    cin>>n;
MyHash mh(n);
cout<<"How Many Data you want to insert"<<endl;
for(int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    mh.insert(temp);
}
cout<<"Choose from number 1 and 2 option"<<endl;
cout<<"1->Search 2->Delete"<<endl;
int k;
cin>>k;
switch(k)
{
    case 1:
    cout<<"Enter Number To search"<<endl;
    int num;
    cin>>num;
    mh.search(num);
    break;
    case 2:
    cout<<"Enter Number To Delete"<<endl;
    int num1;
    cin>>num1;
    mh.del(num1);
    break;
    default:
    cout<<"Enter number 1 or 2 tO Perform opertation"<<endl;
    break;
}
}