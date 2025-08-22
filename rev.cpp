#include<iostream>
#include<vector>
using namespace std;
int rev(vector<int>& nums , int start) // & pass by reference
{
  int s = start+1;
  int end = nums.size()-1;
  while(s<=end)
 {
    swap(nums[s],nums[end]);
    s++;
    end--;
  
  } 
 
}
int main()
{
    vector<int>nums={2,3,4,5,6,7,8};
    int start=3;
     rev(nums,start);
     for(int i=0;i<nums.size();i++)
     {
        cout<<nums[i]<<" ";
     }
    
    return 0;
}