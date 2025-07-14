#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int i = nums.size() - 1;
    while (i > 0 && nums[i - 1] >= nums[i])
    {
        i--;
    }

    if (i == 0)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    int j = nums.size() - 1;
    while (j >= i && nums[j] <= nums[i - 1])
    {
        j--;
    }

    swap(nums[j], nums[i - 1]);
    reverse(nums.begin() + i, nums.end());
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

    nextPermutation(nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}