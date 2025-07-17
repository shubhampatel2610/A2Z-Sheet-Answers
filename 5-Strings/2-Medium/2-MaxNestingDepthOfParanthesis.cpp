#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int n = s.size();
    int ans = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            count++;
            ans = max(ans, count);
        }
        else if (s[i] == ')')
        {
            count--;
        }
    }

    return ans;
}

int main()
{
    string s;
    getline(cin, s);

    int ans = maxDepth(s);
    cout << "Max Depth of Paranthesis: " << ans;

    return 0;
}