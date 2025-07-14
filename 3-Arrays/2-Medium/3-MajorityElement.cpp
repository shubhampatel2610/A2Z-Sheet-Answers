#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int ans = 0, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (!count)
        {
            ans = nums[i];
            count++;
        }
        else
        {
            if (nums[i] == ans)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }

    return ans;
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

    int ans = majorityElement(nums);

    cout << "Majority Element: " << ans;

    return 0;
}