#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(vector<int> &nums, int n)
{
    if (n == 1)
    {
        return;
    }

    for (int j = 0; j <= n - 2; j++)
    {
        if (nums[j] > nums[j + 1])
        {
            swap(nums[j], nums[j + 1]);
        }
    }

    recursiveBubbleSort(nums, n - 1);
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

    recursiveBubbleSort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}