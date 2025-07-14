#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int maxSum = nums[0];
    int maxPrevSum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        maxPrevSum = max(maxPrevSum + nums[i], nums[i]);
        maxSum = max(maxSum, maxPrevSum);
    }

    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    int ans = maxSubArray(nums);

    cout << "Maximum Sum of Subarray: " << ans;

    return 0;
}