#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    int n = s.size();
    unordered_map<char, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
    }

    priority_queue<pair<int, char>> pq;
    for (auto i : freq)
    {
        pq.push({i.second, i.first});
    }

    string ans = "";
    while (!pq.empty())
    {
        char c = pq.top().second;
        int count = pq.top().first;
        while (count--)
        {
            ans += c;
        }
        pq.pop();
    }

    return ans;
}

int main()
{
    string s;
    getline(cin, s);

    string ans = frequencySort(s);
    cout << ans;

    return 0;
}