#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> gt;
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        gt.push_back(temp);
    }
     for (auto i = gt.begin(); i != gt.end(); ++i)
        cout << *i << " ";
    cout<<endl;
    int erase1,erase2,erase3;
    cin>>erase1;
    gt.erase(gt.begin()+erase1-1);
    cin>>erase2>>erase3;
    gt.erase(gt.begin()+erase2-1,gt.begin()+erase3-1);
     for (auto i = gt.begin(); i != gt.end(); ++i)
        cout << *i << " ";
    return 0;
}
