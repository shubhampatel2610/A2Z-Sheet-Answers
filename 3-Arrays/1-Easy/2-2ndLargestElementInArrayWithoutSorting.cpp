
#include <bits/stdc++.h>
using namespace std;
/* void getElements(vector<int> nums, int n)
{
    if (n == 0 || n == 1)
    {
        cout << -1 << " " << -1 << endl;
    }

    int firstSmall = INT_MAX, secondSmall = INT_MAX;
    int firstLarge = INT_MIN, secondLarge = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        firstSmall = min(firstSmall, nums[i]);
        firstLarge = max(firstLarge, nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < secondSmall && nums[i] != firstSmall)
            secondSmall = nums[i];
        if (nums[i] > secondLarge && nums[i] != firstLarge)
            secondLarge = nums[i];
    }

    cout << "Second smallest is " << secondSmall << endl;
    cout << "Second largest is " << secondLarge << endl;
} */

int secondSmallest(vector<int> nums)
{
    int n = nums.size();
    if (n < 2)
    {
        return -1;
    }
    int firstSmall = INT_MAX;
    int secondSmall = INT_MAX;
    int i;
    for (i = 0; i < n; i++)
    {
        if (nums[i] < firstSmall)
        {
            secondSmall = firstSmall;
            firstSmall = nums[i];
        }
        else if (nums[i] < secondSmall && nums[i] != firstSmall)
        {
            secondSmall = nums[i];
        }
    }
    return secondSmall;
}

int secondLargest(vector<int> nums)
{
    int n = nums.size();
    if (n < 2)
    {
        return -1;
    }
    int firstLarge = INT_MIN, secondLarge = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (nums[i] > firstLarge)
        {
            secondLarge = firstLarge;
            firstLarge = nums[i];
        }

        else if (nums[i] > secondLarge && nums[i] != firstLarge)
        {
            secondLarge = nums[i];
        }
    }
    return secondLarge;
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

    // getElements(nums, n);
    int secondLarge = secondLargest(nums);
    int secondSmall = secondSmallest(nums);

    cout << "Second Largest Number: " << secondLarge << endl;
    cout << "second Smallest Number: " << secondSmall;

    return 0;
}
