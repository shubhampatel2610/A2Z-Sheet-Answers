#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high)
{
    vector<int> tempNums;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            tempNums.push_back(nums[left]);
            left++;
        }
        else
        {
            tempNums.push_back(nums[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        tempNums.push_back(nums[left]);
        left++;
    }
    while (right <= high)
    {
        tempNums.push_back(nums[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        nums[i] = tempNums[i - low];
    }
}

void mergeSort(vector<int> &nums, int low, int high)
{
    int mid = (low + high) / 2;

    if (low >= high)
    {
        return;
    }

    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);

    merge(nums, low, mid, high);
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

    mergeSort(nums, 0, nums.size() - 1);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}