#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
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
    sortedVector = bubbleSort(nums);

    for (int i = 0; i < n; i++)
    {
        cout << sortedVector[i] << " ";
    }

    return 0;
}