#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int j = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
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

    int index = removeDuplicates(nums);
    for (int i = 0; i < index; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}