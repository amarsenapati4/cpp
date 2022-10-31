#include<bits/stdc++.h>
using namespace std;
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    float median;
        vector<int> nums3(nums1.size() + nums2.size());
          merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());
        //  for (int i = 0; i < nums3.size(); i++)
        //  {
        // cout << nums3[i] << " ";
        //  }
    if((nums3.size()%2)!=0)
    {
        median=nums3[(nums3.size()-1)/2];
        return median;
    }
    else{
        int j=((nums3.size()/2)+1);
    int k=nums3.size()/2;
    median=float((nums3[j-1]+nums3[k-1])/2);
    return median;
    }
        
    }
int main(){
    int n1,n2;
    cin>>n1>>n2;
     vector<int> vect1(n1);
      vector<int> vect2(n2);

      for(int i=0;i<n1;i++)
      {
        cin>>vect1[i];
      }
      for(int i=0;i<n2;i++)
      {
        cin>>vect2[i];
      }
   cout<<findMedianSortedArrays(vect1,vect2);
}