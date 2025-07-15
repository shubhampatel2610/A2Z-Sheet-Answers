#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    if ((n == 1) || (n > 1 && nums[0] > nums[1]))
    {
        return 0;
    }
    if (nums[n - 1] > nums[n - 2])
    {
        return n - 1;
    }

    int low = 1, high = n - 2, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[mid] > nums[mid - 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return 0;
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

    int ans = findPeakElement(nums);
    cout << "Peak Element in Array: " << ans;

    return 0;
}