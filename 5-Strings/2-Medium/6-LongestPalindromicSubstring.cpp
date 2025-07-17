#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{
    int n = s.size();

    if (s.empty())
    {
        return "";
    }

    if (n == 1)
    {
        return s;
    }

    int start = 0, maxLen = 1;

    for (int i = 0; i < n; i++)
    {
        // odd length
        int low = i, high = i;
        while (low >= 0 && high < n && s[low] == s[high])
        {
            int currLen = high - low + 1;
            if (currLen > maxLen)
            {
                start = low;
                maxLen = currLen;
            }
            low--;
            high++;
        }

        // even length
        low = i, high = i + 1;
        while (low >= 0 && high < n && s[low] == s[high])
        {
            int currLen = high - low + 1;
            if (currLen > maxLen)
            {
                start = low;
                maxLen = currLen;
            }
            low--;
            high++;
        }
    }

    return s.substr(start, maxLen);
}

int main()
{
    string s;
    getline(cin, s);

    string ans = longestPalindrome(s);
    cout << ans;

    return 0;
}