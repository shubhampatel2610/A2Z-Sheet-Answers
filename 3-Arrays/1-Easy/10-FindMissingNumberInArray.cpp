#include <bits/stdc++.h>
using namespace std;

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

    int totalSum = (n * (n + 1)) / 2;
    int eleSum = accumulate(nums.begin(), nums.end(), 0);

    cout << "Missing number: " << totalSum - eleSum;

    return 0;
}