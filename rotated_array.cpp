#include<iostream>
#include<vector>
using namespace std;
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        
        // If array is not rotated
        if (nums[s] <= nums[e])
            return nums[s];

        while (s <= e) {
            int mid = s + (e - s) / 2;

            // Check if mid is minimum
            if (mid > 0 && nums[mid] < nums[mid - 1])
                return nums[mid];
            // Check if mid+1 is minimum
            if (mid < nums.size() - 1 && nums[mid] > nums[mid + 1])
                return nums[mid + 1];

            // Decide which side to search
            if (nums[mid] >= nums[s])
                s = mid + 1;
            else
                e = mid - 1;
        }

        return -1; // Should never reach here
    }

