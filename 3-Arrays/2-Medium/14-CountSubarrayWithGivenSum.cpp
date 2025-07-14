#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> prefixMap;
    prefixMap[0] = 1;
    int prefixSum = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        prefixSum += nums[i];

        int prefixDiff = prefixSum - k;
        ans += prefixMap[prefixDiff];

        prefixMap[prefixSum]++;
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

    int ans = subarraySum(nums, k);

    cout << "Subarray Count: " << ans;

    return 0;
}