#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &nums, long long k)
{
    int n = nums.size();
    map<long long, int> preSumMap;
    long long sum = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];

        // if the sum = k, update the ans:
        if (sum == k)
        {
            ans = max(ans, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        // Calculate the length and update ans:
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            ans = max(ans, len);
        }

        // update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    int ans = getLongestSubarray(nums, k);

    cout << "Longest Subarray: " << ans;

    return 0;
}