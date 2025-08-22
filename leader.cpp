
// #include<iostream>
// #include<climits>
// #include<algorithm>
// #include<vector>
// using namespace std;

// vector<int> leader(vector<int>& nums)
// {
//     int maxi = INT_MIN;
//     int n = nums.size();
//     vector<int> ans;

//     for(int i = n - 1; i >= 0; i--)
//     {
//         if(nums[i] > maxi) // fixed comparison
//         {
//             ans.push_back(nums[i]);
//         }
//         maxi = max(nums[i], maxi);
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

// int main()
// {
//     vector<int> num = {2, 6, 4, 1, 5};
//     vector<int> ans = leader(num);

//     for(int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }
#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> leader(vector<int>& nums)
{

      int maxi = INT_MIN; 
      int n = nums.size();
      vector<int> ans;
      for(int i = n-1;i>=0;i++)
      {
        if(nums[i] > maxi)
        {
            ans.push_back(nums[i]);
        }
        maxi = max(nums[i],maxi);
      } 
      reverse(ans.begin(),ans.end());
      return ans;
    
}

int main()
{
    vector<int>num={2,6,4,1,5};
    
    vector<int>ans=leader(num);
    for(int i =0 ;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}