#include <bits/stdc++.h>
using namespace std;

// string removeOuterParentheses(string s)
// {
//     string ans = "";
//     int n = s.size();
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '(')
//         {
//             if (count > 0)
//             {
//                 ans += s[i];
//             }
//             count++;
//         }
//         if (s[i] == ')')
//         {
//             count--;
//             if (count > 0)
//             {
//                 ans += s[i];
//             }
//         }
//     }

//     return ans;
// }

string removeOuterParentheses(string s)
{
    string ans = "";
    int n = s.size();
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        if (s[i] == ')')
        {
            st.pop();
        }
        if (!st.empty())
        {
            ans += s[i];
        }
    }

    return ans;
}

int main()
{
    string s;
    getline(cin, s);

    string ans = removeOuterParentheses(s);
    cout << ans;

    return 0;
}