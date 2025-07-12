#include <bits/stdc++.h>
using namespace std;

void recursiveInsertionSort(vector<int> &nums, int i, int n)
{

    if (i == n)
    {
        return;
    }

    int j = i;
    while (j > 0 && nums[j - 1] > nums[j])
    {
        swap(nums[j], nums[j - 1]);
        j--;
    }

    recursiveInsertionSort(nums, i + 1, n);
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

    recursiveInsertionSort(nums, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}