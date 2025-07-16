#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";
    int n = strs.size();
    sort(strs.begin(), strs.end());

    string str1 = strs[0], str2 = strs[n - 1];

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == str2[i])
        {
            ans += str1[i];
        }
        else
        {
            break;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> strs;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        strs.push_back(s);
    }

    string ans = longestCommonPrefix(strs);
    cout << ans;

    return 0;
}