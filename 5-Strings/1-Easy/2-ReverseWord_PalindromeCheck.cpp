#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    int n = s.length();
    int end = n - 1;
    string ans = "";
    string word = "";

    while (end >= 0)
    {
        if (s[end] != ' ')
        {
            word += s[end];
        }
        else
        {
            if (!word.empty())
            {
                reverse(word.begin(), word.end());
                if (!ans.empty())
                    ans += " ";
                ans += word;
                word = "";
            }
        }
        end--;
    }

    if (!word.empty())
    {
        reverse(word.begin(), word.end());
        if (!ans.empty())
            ans += " ";
        ans += word;
    }

    return ans;
}

int main()
{
    string s;
    getline(cin, s);

    string ans = reverseWords(s);
    cout << ans;

    return 0;
}