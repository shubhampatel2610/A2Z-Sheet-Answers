#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        currSum += nums[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
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