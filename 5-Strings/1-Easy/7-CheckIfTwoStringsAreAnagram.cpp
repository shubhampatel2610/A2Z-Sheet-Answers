#include <bits/stdc++.h>
using namespace std;

// bool isAnagram(string s, string t)
// {
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//     return s == t;
// }

bool isAnagram(string s, string t)
{
    int n = s.size(), m = t.size();
    unordered_map<int, int> map1, map2;

    if (n != m)
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        map1[s[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        map2[t[i]]++;
    }

    for (auto it : map1)
    {
        if (map1[it.first] != map2[it.first])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    bool ans = isAnagram(s, t);
    cout << (ans ? "YES" : "NO");

    return 0;
}