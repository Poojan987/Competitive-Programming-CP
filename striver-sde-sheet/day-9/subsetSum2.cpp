#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    vector<int> v;
    void fun(vector<int> &nums, int j)
    {
        for (int i = j; i < nums.size(); ++i, j = i - 1)
        {
            if (i > j && nums[i] == nums[j])
                continue;
            v.push_back(nums[i]);
            ans.push_back(v);
            fun(nums, i + 1);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        ans.push_back({});
        sort(nums.begin(), nums.end());
        fun(nums, 0);
        return ans;
    }
};