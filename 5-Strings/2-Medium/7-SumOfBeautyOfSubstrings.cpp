#include <bits/stdc++.h>
using namespace std;

int beautySum(string s)
{
    int n = s.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> charFreq;
        for (int j = i; j < n; j++)
        {
            charFreq[s[j]]++;
            int maxFreq = INT_MIN, minFreq = INT_MAX;
            for (auto i : charFreq)
            {
                maxFreq = max(maxFreq, i.second);
                minFreq = min(minFreq, i.second);
            }

            ans += (maxFreq - minFreq);
        }
    }

    return ans;
}

int main()
{
    string s;
    getline(cin, s);

    int ans = beautySum(s);
    cout << "Sum of Beauty of string: " << ans;

    return 0;
}