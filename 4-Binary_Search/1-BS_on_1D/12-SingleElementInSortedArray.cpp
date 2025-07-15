#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
    {
        return nums[0];
    }

    if (nums[0] != nums[1])
    {
        return nums[0];
    }

    if (nums[n - 1] != nums[n - 2])
    {
        return nums[n - 1];
    }

    int low = 1, high = n - 2, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if ((nums[mid] != nums[mid - 1]) && (nums[mid] != nums[mid + 1]))
        {
            return nums[mid];
        }
        else if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
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

    int ans = singleNonDuplicate(nums);
    cout << "Single Element in Array: " << ans;

    return 0;
}