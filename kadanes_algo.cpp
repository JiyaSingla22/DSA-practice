#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int kadanes_algo(vector<int>& nums)
{
   
    int max_sum=nums[0];
    int current_sum=nums[0];
    int start=0, end =0, tempStart=0;
    for(int i=1; i< nums.size();i++)
    {
         current_sum = max(nums[i],current_sum + nums[i]);
         
         max_sum = max(current_sum,max_sum);
         cout<<nums[i]<<" ";
    }
    cout<<endl;
     return max_sum;
}



int main()
{
    vector<int> num={-2,1,-3,4,-1,2,1,-5,4};
    cout<<kadanes_algo(num);
    return 0;
}




// int main()
// {
//     int arr[4]={2,7,11,15};
//     int target=9;
//     int sum=0;
//         for (int i=0;i<4;i++)
//         {
//             sum=arr[i] + arr[i+1];
//              if(sum>target)
//             {
//                 break;
//             }
//             if(sum==target)
//             {
//                 cout<<arr[i]<<" and "<<arr[i+1];
//             }
           
//         }
//         return 0;
// }
// {
//     int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
//     int max_sum=INT_MIN;
//     int current_sum=0;
//     for(int i=0;i<9;i++)
//     {  
//         current_sum +=arr[i];
//         max_sum= max(current_sum,max_sum);
//         if(current_sum<0)
//         {
//             current_sum=0;
//         }
//     }
//     cout<< max_sum ;
//     return 0;

// }