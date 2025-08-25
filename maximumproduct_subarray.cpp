#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    int ans = INT_MIN;
    int pre = 1;
    int suffix = 1;
    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1;
        if (suffix == 0)
            suffix = 1;
        pre *= nums[i];
        suffix *= nums[n - i - 1];
        ans = max(ans, max(pre, suffix));
    }
    return ans;
}

int main()
{
    vector<int>ans={1,2,3,4,0,-5};
    cout<<maxProduct(ans);
    return 0;
}
