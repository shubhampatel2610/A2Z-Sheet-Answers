#include <bits/stdc++.h>
using namespace std;

int findRotation(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    int minElement = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[high])
        {
            if (arr[low] < minElement)
            {
                minElement = arr[low];
                index = low;
            }
            break;
        }

        if (arr[low] <= arr[mid])
        {
            if (arr[low] < minElement)
            {
                minElement = arr[low];
                index = low;
            }
            low = mid + 1;
        }
        else
        {
            if (arr[mid] < minElement)
            {
                minElement = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
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

    int ans = findRotation(nums);
    cout << "Rotations of Array: " << ans;

    return 0;
}