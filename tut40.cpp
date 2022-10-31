#include<bits/stdc++.h>
using namespace std;
class student
{
public:
string name;
int roll_no;

void classMessage(){
    cout<<name<<" "<<roll_no;
}
};

int main()
{
    student amar;
    cin>>amar.name>>amar.roll_no;
    amar.classMessage();
}

