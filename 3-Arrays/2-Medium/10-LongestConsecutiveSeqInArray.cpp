#include <bits/stdc++.h>
using namespace std;

// int longestConsecutive(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     int ans = 0, len = 1;

//     if (n == 0)
//     {
//         return 0;
//     }

//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i] == nums[i - 1])
//         {
//             continue;
//         }
//         if (nums[i] == nums[i - 1] + 1)
//         {
//             len++;
//             ans = max(ans, len);
//         }
//         else
//         {
//             len = 1;
//         }
//     }

//     return max(ans, len);
// }

int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> set(nums.begin(), nums.end());
    int n = nums.size();
    int ans = 0;

    for (int i : set)
    {
        if (set.find(i - 1) == set.end())
        {
            int len = 1;
            while (set.find(i + len) != set.end())
            {
                len++;
            }
            ans = max(ans, len);
        }
    }

    return ans;
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

    int ans = longestConsecutive(nums);

    cout << "Longest Consecutive Sequence Length: " << ans;

    return 0;
}