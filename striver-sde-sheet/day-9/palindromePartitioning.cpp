#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkp(string &s)
    {
        int t = s.length();
        for (int i = 0; i < (t + 1) / 2; i++)
        {
            if (s[i] != s[t - i - 1])
            {
                return false;
            }
        }
        return true;
    }

    void find(vector<vector<string>> &ans, vector<string> temp, int i, string s)
    {
        if (i == s.length())
        {
            ans.push_back(temp);
            return;
        }

        for (int j = i; j < s.length(); j++)
        {
            string t = s.substr(i, j - i + 1);
            if (checkp(t))
            {
                temp.push_back(t);
                find(ans, temp, j + 1, s);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> temp;

        find(ans, temp, 0, s);

        return ans;
    }
};