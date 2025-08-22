#include<iostream>
#include<vector>
using namespace std;
vector<int> union_array(vector<int>& nums1,vector<int>& nums2)
{
    int n1=nums1.size();
    int n2=nums2.size();
    int i =0;
    int j =0;
    vector<int>union_arr;

    while(i<n1 && j<n2)
    {
        if(nums1[i]<nums2[j])
        {
            if(union_arr.size()==0 || union_arr.back()!=nums1[i])
            union_arr.push_back(nums1[i]);

                i++;
            
        }
        else if(nums1[i]>nums2[j])
        {
             if(union_arr.size()==0 || union_arr.back()!=nums2[j])
            union_arr.push_back(nums2[j]);

                j++;
            
        }
          else
           { // nums1[i] == nums2[j]
            if (union_arr.empty() || union_arr.back() != nums1[i])
                union_arr.push_back(nums1[i]);
                
            i++;
            j++;
        }
    }

    while(j<n2)
    {
          if(union_arr.size()==0 || union_arr.back()!=nums2[j])
           union_arr.push_back(nums2[j]);

                j++;
            
    }
    while(i<n1)
    {
         if(union_arr.size()==0 || union_arr.back()!=nums1[i])
          union_arr.push_back(nums1[i]);

                i++;
            
    }
    return union_arr;

}


int main()
{
    vector<int>nums1={4,5,6,6,6,7,8,9};
    vector<int>nums2={2,3,4,4,4,5,6,7};
      vector<int>result = union_array(nums1,nums2);
      for(int i =0;i<result.size();i++)
      {
        cout<<result[i]<<" ";
      }
    return 0;
}