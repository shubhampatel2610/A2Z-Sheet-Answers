#include <bits/stdc++.h>
using namespace std;

int partitionIndex(vector<int> &nums, int low, int high)
{
    int pivot = nums[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (nums[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (nums[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(nums[i], nums[j]);
    }
    swap(nums[low], nums[j]);
    return j;
}

void quickSortAlgo(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int pIndex = partitionIndex(nums, low, high);
        quickSortAlgo(nums, low, pIndex - 1);
        quickSortAlgo(nums, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> nums)
{
    quickSortAlgo(nums, 0, nums.size() - 1);
    return nums;
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

    vector<int> sortedVector;
    sortedVector = quickSort(nums);

    for (int i = 0; i < n; i++)
    {
        cout << sortedVector[i] << " ";
    }

    return 0;
}