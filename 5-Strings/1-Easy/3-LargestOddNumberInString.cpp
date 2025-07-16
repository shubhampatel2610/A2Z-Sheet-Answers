#include <bits/stdc++.h>
using namespace std;

string largestOddNumber(string num)
{
    int n = num.size();

    for (int i = n - 1; i >= 0; i--)
    {
        int currDigit = num[i] - '0';
        if (currDigit % 2 != 0)
        {
            return num.substr(0, i + 1);
        }
    }

    return "";
}

int main()
{
    string s;
    getline(cin, s);

    string ans = largestOddNumber(s);
    cout << ans;

    return 0;
}