#include<bits/stdc++.h>
using namespace std;
class Donor
{
    int Donor_Number;
    string Name;
    string Blood_Group;
    public:
    void setInput(int &DN,string &N,string &BG){
        Donor_Number=DN;
        Name=N;
        Blood_Group=BG;
    }
    void getOutput()
    {
        cout<<"Donor Number Is"<<" "<<Donor_Number<<endl;
        cout<<"Name:-"<<" "<<Name<<endl;
    }
    string getCheckgroup()
    {
        return Blood_Group;
    }

};
int main(){
Donor p1;
int DN;
string N;
string BG;
cout<<"Enter Donor_Number"<<endl;
cin>>DN;
cout<<"Enter Name"<<endl;
cin>>N;
cout<<"Enter Blood_Group"<<endl;
cin>>BG;
p1.setInput(DN,N,BG);
p1.getOutput();
cout<<"Blood Group is "<<" "<<p1.getCheckgroup()<<endl;
}