#include <bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            swap(nums[j - 1], nums[j]);
            j--;
        }
    }
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
    sortedVector = insertionSort(nums);

    for (int i = 0; i < n; i++)
    {
        cout << sortedVector[i] << " ";
    }

    return 0;
}