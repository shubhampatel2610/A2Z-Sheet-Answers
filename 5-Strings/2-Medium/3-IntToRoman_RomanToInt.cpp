#include <bits/stdc++.h>
using namespace std;

int romanValue(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    }
    return 0;
}

int romanToInt(string s)
{
    int ans = 0;
    int prevVal = 0;
    int n = s.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (romanValue(s[i]) < prevVal)
        {
            ans -= romanValue(s[i]);
        }
        else
        {
            ans += romanValue(s[i]);
        }
        prevVal = romanValue(s[i]);
    }

    return ans;
}

string intToRoman(int num)
{
    vector<pair<int, string>> intRoman = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}};

    string ans = "";

    for (auto val : intRoman)
    {
        while (num >= val.first)
        {
            ans += val.second;
            num -= val.first;
        }
    }

    return ans;
}

int main()
{
    string s;
    getline(cin, s);

    int intVal = romanToInt(s);
    cout << "Integer value of Roman number: " << intVal << endl;

    string intRoman = intToRoman(intVal);
    cout << "Roman number of Integer value: " << intRoman;

    return 0;
}