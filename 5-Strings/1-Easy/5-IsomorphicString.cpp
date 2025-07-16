#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    int n = s.size(), m = t.size();

    if (n != m)
    {
        return false;
    }

    unordered_map<char, char> map;

    for (int i = 0; i < n; i++)
    {
        if (map.find(s[i]) == map.end())
        {
            map.insert({s[i], t[i]});
        }
        else
        {
            if (map[s[i]] != t[i])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    bool ans = isIsomorphic(s, t);
    cout << (ans ? "YES" : "NO");

    return 0;
}