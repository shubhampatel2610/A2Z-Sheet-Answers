#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{
    if (s.size() != goal.size())
    {
        return false;
    }

    return (s + s).find(goal) < s.size();
}

int main()
{
    string s, goal;
    getline(cin, s);
    getline(cin, goal);

    bool ans = rotateString(s, goal);
    cout << (ans ? "YES" : "NO");

    return 0;
}