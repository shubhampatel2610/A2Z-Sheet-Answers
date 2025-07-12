#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> nums1, vector<int> nums2)
{
    int i = 0, j = 0, n = nums1.size(), m = nums2.size();
    vector<int> mergedNums;
    while (i < n && j < m)
    {
        if (nums1[i] <= nums2[j])
        {
            if (mergedNums.size() == 0 || mergedNums.back() != nums1[i])
            {
                mergedNums.push_back(nums1[i]);
            }
            i++;
        }
        else
        {
            if (mergedNums.size() == 0 || mergedNums.back() != nums2[j])
            {
                mergedNums.push_back(nums2[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (mergedNums.back() != nums1[i])
        {
            mergedNums.push_back(nums1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (mergedNums.back() != nums2[j])
        {
            mergedNums.push_back(nums2[j]);
        }
        j++;
    }
    return mergedNums;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums1;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums1.push_back(ele);
    }

    int m;
    cin >> m;
    vector<int> nums2;
    for (int i = 0; i < m; i++)
    {
        int ele;
        cin >> ele;
        nums2.push_back(ele);
    }

    vector<int> ansArray;
    ansArray = unionArray(nums1, nums2);
    for (int i = 0; i < ansArray.size(); i++)
    {
        cout << ansArray[i] << " ";
    }

    return 0;
}