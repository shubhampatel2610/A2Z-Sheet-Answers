#include <bits/stdc++.h>
using namespace std;

vector<int> printLeaders(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans;

    int max = nums[n - 1];
    ans.push_back(nums[n - 1]);

    for (int i = n - 2; i >= 0; i--)
        if (nums[i] > max)
        {
            ans.push_back(nums[i]);
            max = nums[i];
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

    vector<int> ans = printLeaders(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}