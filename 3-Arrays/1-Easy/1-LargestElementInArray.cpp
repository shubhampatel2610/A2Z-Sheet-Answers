#include <bits/stdc++.h>
using namespace std;

int findLargestElement(vector<int> nums)
{

    int maxEle = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        maxEle = max(maxEle, nums[i]);
        // minEle = min(minEle, nums[i]); ----- find smallest element
    }
    return maxEle;
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

    int maxElement = findLargestElement(nums);
    cout << "Max Element: " << maxElement;
    return 0;
}
