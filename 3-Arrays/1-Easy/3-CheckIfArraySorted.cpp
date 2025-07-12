#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> nums)
{
    int n = nums.size();
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }

    if (nums[n - 1] > nums[0])
    {
        count++;
    }

    return count <= 1;
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

    bool ans = check(nums);
    cout << "If Array is sorted?: " << (ans ? "YES" : "NO");

    return 0;
}