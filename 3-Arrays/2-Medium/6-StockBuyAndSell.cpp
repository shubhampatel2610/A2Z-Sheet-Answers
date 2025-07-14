#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int ans = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minPrice = min(minPrice, prices[i]);
        ans = max(ans, prices[i] - minPrice);
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

    int ans = maxProfit(nums);

    cout << "Maximum Profit: " << ans;

    return 0;
}