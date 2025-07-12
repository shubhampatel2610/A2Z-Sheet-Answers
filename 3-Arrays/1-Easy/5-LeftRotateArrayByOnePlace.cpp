#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &nums)
{
    int n = nums.size();
    int temp = nums[0];
    for (int i = 0; i < n - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
    nums[n - 1] = temp;
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

    rotateArray(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}