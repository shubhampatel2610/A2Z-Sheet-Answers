#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int ans = INT_MAX;
    int n = nums.size();
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[low] <= nums[high])
        {
            ans = min(ans, nums[low]);
            break;
        }
        if (nums[low] <= nums[mid])
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, nums[mid]);
            high = mid - 1;
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

    int ans = findMin(nums);
    cout << "Minimum Element in Array: " << ans;

    return 0;
}