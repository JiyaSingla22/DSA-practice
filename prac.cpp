#include<iostream>
#include<vector>
using namespace std;

int first_occ(vector<int>nums,int size,int target)
{
    int first=-1;
    int start=0;
    int end = nums.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        mid=start+(end-start)/2;
      if(nums[mid]==target)
      {
        first =mid;
        end=mid-1;
      }
      else if(nums[mid]<target)
      {
        start=mid+1;
      }
      else
      end=mid-1;
    }
    return first;
}
int last_occ(vector<int>nums,int size,int target)
{
    int last=-1;
    int start=0;
    int end = nums.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        mid=start+(end-start)/2;
      if(nums[mid]==target)
      {
        last =mid;
        start=mid+1;
      }
      else if(nums[mid]<target)
      {
        start=mid+1;
      }
      else
      end=mid-1;
    }
    return last;
}
void print()
{
    vector<int>nums={1,4,4,4,4,4,4,4,7,8};
    int target=4;
    cout<<"First occurence is at "<<first_occ(nums,nums.size(),target)<<endl;
 cout<<"Last occurence is at "<<last_occ(nums,nums.size(),target);
}





int main()
{
    print();
    return 0;
}