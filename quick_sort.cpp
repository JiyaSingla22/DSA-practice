#include<iostream>
#include<vector>
using namespace std;

int part_fun(vector<int>& array,int low,int high)
{
    int pivot = array[low];
    int i = low;
    int j = high;
    while(i<j)
    {
    while(array[i]<=pivot && i<high )//compare if i is greater than pivot and = is use if element is eq to pivot then it will move to left 
    {
        i++;
    }
    while(array[j]>pivot && j>low )//compare if j is lesser than pivot
    {
        j--;
    }

    if(i<j)
    swap(array[i],array[j]);
    }
    swap(array[low],array[j]);
    return j; //pivot will come to its org index
}



void qs(vector<int>& array,int low,int high)
{
   
    if(low<high)
    {
        int part_ind=part_fun(array,low,high);//to find partition index
        qs(array,low, part_ind-1);
        qs(array, part_ind+1,high);
    }
}

int main(){
    vector<int>nums={4,6,2,5,7,9,1,3};
    int low=0;
    qs(nums,low,nums.size()-1);
    for(int i =0 ; i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}