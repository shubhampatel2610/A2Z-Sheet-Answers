#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (map.find(target - nums[i]) != map.end())
        {
            return {map[target - nums[i]], i};
        }
        map[nums[i]] = i;
    }

    return {};
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

    int target;
    cin >> target;

    vector<int> ans;
    ans = twoSum(nums, target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}