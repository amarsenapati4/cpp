#include<bits/stdc++.h>
using namespace std;
 int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        // int r=0;
        for(int i=1;i<n;i++)
        {
            if(array[i]!=i)
            {
                return i;
                break;
            }
        }
        return -1;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<array[i]<<endl;
        // }
    }
int main(){
    int n;
    cin>>n;
vector <int> array(n);
for(int i=0;i<n-1;i++)
{
    cin>>array[i];
}
cout<<MissingNumber(array,n);
}