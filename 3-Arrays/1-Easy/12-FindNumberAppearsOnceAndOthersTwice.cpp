#include <bits/stdc++.h>
using namespace std;

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

    sort(nums.begin(), nums.end());
    int ans = nums[n - 1];

    for (int i = 1; i < n; i += 2)
    {
        if (nums[i] != nums[i - 1])
        {
            ans = nums[i - 1];
        }
    }

    cout << "Single Number: " << ans;

    return 0;
}