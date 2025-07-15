#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target <= nums[mid])
        {
            ans = mid;
            high = mid - 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    int ans = searchInsert(nums, target);
    cout << "Insert Position of Target: " << ans;

    return 0;
}