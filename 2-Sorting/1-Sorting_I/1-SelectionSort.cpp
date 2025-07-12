#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
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
    sortedVector = selectionSort(nums);

    for (int i = 0; i < n; i++)
    {
        cout << sortedVector[i] << " ";
    }

    return 0;
}