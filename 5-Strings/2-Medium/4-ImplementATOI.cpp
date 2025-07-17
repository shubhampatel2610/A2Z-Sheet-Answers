#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    int n = s.size();
    int i = 0;
    long ans = 0;
    int sign = 1;

    while (i < n && s[i] == ' ')
    {
        i++;
    }

    if (i < n && (s[i] == '-' || s[i] == '+'))
    {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    while (i < n && (s[i] >= '0' && s[i] <= '9'))
    {
        int digit = s[i] - '0';
        ans = ans * 10 + digit;

        if (sign * ans > INT_MAX)
        {
            return INT_MAX;
        }
        if (sign * ans < INT_MIN)
        {
            return INT_MIN;
        }

        i++;
    }

    return sign * ans;
}

int main()
{
    string s;
    getline(cin, s);

    int ans = myAtoi(s);
    cout << ans;

    return 0;
}