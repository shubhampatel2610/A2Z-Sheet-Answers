#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int> nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] <= target)
        {
            ans = nums[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int findCeil(vector<int> nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] >= target)
        {
            ans = nums[mid];
            high = mid - 1;
        }
        else
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

    int ceilValue = findCeil(nums, target);
    int floorValue = findFloor(nums, target);

    cout << "Ceil Value of Target: " << ceilValue << endl;
    cout << "Floor Value of Target: " << floorValue;

    return 0;
}