#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int largest_element(vector<int>nums)
{
    int n = nums.size()-1;
    int largest = nums[0];
    int secondlargest= -1;
    for(int i =1 ;i<=n ; i++)
    {
        if(nums[i]>largest)
        {
            secondlargest = largest;
            largest= nums[i];
        }
        else if( nums[i]<largest && nums[i]> secondlargest)
        {
           secondlargest= nums[i];
        }
    } return secondlargest;
}


int main(){
    vector<int>nums={14,3,6,8,9};
    cout<<"The Second largest element of array is: "<<largest_element(nums);
    return 0;
}